// Created on: 1998-08-20
// Created by: Philippe MANGIN
// Copyright (c) 1998-1999 Matra Datavision
// Copyright (c) 1999-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.



#include <BRepAdaptor_CompCurve.ixx>

#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_HCurve.hxx>
#include <BRepAdaptor_HCompCurve.hxx>
#include <BRep_Tool.hxx>
#include <BRepTools_WireExplorer.hxx>
#include <TopAbs_Orientation.hxx>

#include <GCPnts_AbscissaPoint.hxx>
#include <ElCLib.hxx>
#include <TopExp.hxx>

BRepAdaptor_CompCurve::BRepAdaptor_CompCurve()
{
}

BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(const TopoDS_Wire& W,
					     const Standard_Boolean AC)
{
  Initialize(W, AC);
}

BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(const TopoDS_Wire& W,
					     const Standard_Boolean AC,
					     const Standard_Real First,
					     const Standard_Real Last,
					     const Standard_Real Tol)
{
  Initialize(W, AC, First, Last, Tol);
}

 void BRepAdaptor_CompCurve::Initialize(const TopoDS_Wire& W,
					const Standard_Boolean AC)
{
  Standard_Integer ii, NbEdge;
  BRepTools_WireExplorer wexp;
  TopoDS_Edge E;

  myWire = W;
  PTol = 0.0;
  IsbyAC = AC;

  for (NbEdge=0, wexp.Init(myWire);
       wexp.More(); wexp.Next())
    if (! BRep_Tool::Degenerated(wexp.Current())) NbEdge++;

  if (NbEdge == 0) return;

  CurIndex = (NbEdge+1)/2;
  myCurves = new (BRepAdaptor_HArray1OfCurve) (1,NbEdge);
  myKnots = new (TColStd_HArray1OfReal) (1,NbEdge+1);
  myKnots->SetValue(1, 0.);

  for (ii=0, wexp.Init(myWire);
       wexp.More(); wexp.Next()) {
    E = wexp.Current();
    if (! BRep_Tool::Degenerated(E)) {
      ii++;
      myCurves->ChangeValue(ii).Initialize(E);
      if (AC) {
	myKnots->SetValue(ii+1,  myKnots->Value(ii));
	myKnots->ChangeValue(ii+1) +=
	  GCPnts_AbscissaPoint::Length(myCurves->ChangeValue(ii));
      }
      else  myKnots->SetValue(ii+1, (Standard_Real)ii);
    }
  }

  Forward = Standard_True; // Defaut ; The Reverse Edges are parsed.
  if((NbEdge > 2) || ((NbEdge==2) && (!myWire.Closed())) ) {
    TopAbs_Orientation Or = myCurves->Value(1).Edge().Orientation();
    TopoDS_Vertex VI, VL;
    TopExp::CommonVertex(myCurves->Value(1).Edge(),
			     myCurves->Value(2).Edge(),
			     VI);
    VL = TopExp::LastVertex(myCurves->Value(1).Edge());
    if (VI.IsSame(VL)) { // The direction of parsing is always preserved
      if (Or == TopAbs_REVERSED)
	 Forward = Standard_False;
    }
    else {// The direction of parsing is always reversed
     if (Or != TopAbs_REVERSED)
	 Forward = Standard_False;
    }
  }

  TFirst = 0;
  TLast = myKnots->Value(myKnots->Length());
  myPeriod = TLast - TFirst;
  if (NbEdge == 1)  {
    Periodic =  myCurves->Value(1).IsPeriodic();
  }
  else {
    Periodic = Standard_False;
  }
}

 void BRepAdaptor_CompCurve::Initialize(const TopoDS_Wire& W,
					const Standard_Boolean AC,
					const Standard_Real First,
					const Standard_Real Last,
					const Standard_Real Tol)
{
  Initialize(W, AC);
  TFirst = First;
  TLast = Last;
  PTol = Tol;

  // Trim the extremal curves.
  Handle (BRepAdaptor_HCurve) HC;
  Standard_Integer i1, i2;
  Standard_Real f=TFirst, l=TLast, d;
  i1 = i2 = CurIndex;
  Prepare(f, d, i1);
  Prepare(l, d, i2);
  CurIndex = (i1+i2)/2; // Small optimization
  if (i1==i2) {
    if (l > f)
      HC = Handle(BRepAdaptor_HCurve)::DownCast(myCurves->Value(i1).Trim(f, l, PTol));
    else
      HC = Handle(BRepAdaptor_HCurve)::DownCast(myCurves->Value(i1).Trim(l, f, PTol));
    myCurves->SetValue(i1, HC->ChangeCurve());
  }
  else {
    const BRepAdaptor_Curve& c1 = myCurves->Value(i1);
    const BRepAdaptor_Curve& c2 = myCurves->Value(i2);
    Standard_Real k;

    k = c1.LastParameter();
    if (k>f)
      HC = Handle(BRepAdaptor_HCurve)::DownCast(c1.Trim(f, k, PTol));
    else
      HC = Handle(BRepAdaptor_HCurve)::DownCast(c1.Trim(k, f, PTol));
    myCurves->SetValue(i1, HC->ChangeCurve());

    k = c2.FirstParameter();
    if (k<=l)
      HC = Handle(BRepAdaptor_HCurve)::DownCast(c2.Trim(k, l, PTol));
    else
      HC = Handle(BRepAdaptor_HCurve)::DownCast(c2.Trim(l, k, PTol));
    myCurves->SetValue(i2, HC->ChangeCurve());
  }
}


void BRepAdaptor_CompCurve::SetPeriodic(const Standard_Boolean isPeriodic)
{
  if (myWire.Closed()) {
    Periodic = isPeriodic;
  }
}


const TopoDS_Wire& BRepAdaptor_CompCurve::Wire() const
{
  return myWire;
}

 void BRepAdaptor_CompCurve::Edge(const Standard_Real U,
				  TopoDS_Edge& E,
				  Standard_Real& UonE) const
{
  Standard_Real d;
  Standard_Integer index = CurIndex;
  UonE = U;
  Prepare(UonE, d, index);
  E = myCurves->Value(index).Edge();
}

 Standard_Real BRepAdaptor_CompCurve::FirstParameter() const
{
  return TFirst;
}

 Standard_Real BRepAdaptor_CompCurve::LastParameter() const
{
  return TLast;
}

 GeomAbs_Shape BRepAdaptor_CompCurve::Continuity() const
{
  if ( myCurves->Length() > 1) return GeomAbs_C0;
  return myCurves->Value(1).Continuity();
}

 Standard_Integer BRepAdaptor_CompCurve::NbIntervals(const GeomAbs_Shape S)
{
  Standard_Integer NbInt, ii;
  for (ii=1, NbInt=0; ii<=myCurves->Length(); ii++)
    NbInt += myCurves->ChangeValue(ii).NbIntervals(S);

  return NbInt;
}

 void BRepAdaptor_CompCurve::Intervals(TColStd_Array1OfReal& T,
				       const GeomAbs_Shape S)
{
  Standard_Integer ii, jj, kk, n;
  Standard_Real f, F, delta;

  // First curve (direction of parsing of the edge)
  n = myCurves->ChangeValue(1).NbIntervals(S);
  Handle(TColStd_HArray1OfReal) Ti = new (TColStd_HArray1OfReal) (1, n+1);
  myCurves->ChangeValue(1).Intervals(Ti->ChangeArray1(), S);
  InvPrepare(1, f, delta);
  F = myKnots->Value(1);
  if (delta < 0) {
    // invert the direction of parsing
    for (kk=1,jj=Ti->Length(); jj>0; kk++, jj--)
      T(kk) = F + (Ti->Value(jj)-f)*delta;
  }
  else {
    for (kk=1; kk<=Ti->Length(); kk++)
      T(kk) = F + (Ti->Value(kk)-f)*delta;
  }

  // and the next
  for (ii=2; ii<=myCurves->Length(); ii++) {
    n = myCurves->ChangeValue(ii).NbIntervals(S);
    if (n != Ti->Length()-1) Ti = new (TColStd_HArray1OfReal) (1, n+1);
    myCurves->ChangeValue(ii).Intervals(Ti->ChangeArray1(), S);
    InvPrepare(ii, f, delta);
    F = myKnots->Value(ii);
    if (delta < 0) {
      // invert the direction of parcing
      for (jj=Ti->Length()-1; jj>0; kk++, jj--)
	T(kk) = F + (Ti->Value(jj)-f)*delta;
    }
    else {
      for (jj=2; jj<=Ti->Length(); kk++, jj++)
	T(kk) = F + (Ti->Value(jj)-f)*delta;
    }
  }
}

 Handle(Adaptor3d_HCurve) BRepAdaptor_CompCurve::Trim(const Standard_Real First,
						    const Standard_Real Last,
						    const Standard_Real Tol) const
{
  BRepAdaptor_CompCurve C(myWire, IsbyAC, First, Last, Tol);
  Handle(BRepAdaptor_HCompCurve) HC =
    new (BRepAdaptor_HCompCurve) (C);
  return HC;
}

 Standard_Boolean BRepAdaptor_CompCurve::IsClosed() const
{
  return myWire.Closed();
}

 Standard_Boolean BRepAdaptor_CompCurve::IsPeriodic() const
{
  return Periodic;

}

 Standard_Real BRepAdaptor_CompCurve::Period() const
{
  return myPeriod;
}

 gp_Pnt BRepAdaptor_CompCurve::Value(const Standard_Real U) const
{
  Standard_Real u = U, d;
  Standard_Integer index = CurIndex;
  Prepare(u, d, index);
  return myCurves->Value(index).Value(u);
}

 void BRepAdaptor_CompCurve::D0(const Standard_Real U,
				gp_Pnt& P) const
{
  Standard_Real u = U, d;
  Standard_Integer index = CurIndex;
  Prepare(u, d, index);
  myCurves->Value(index).D0(u, P);
}

 void BRepAdaptor_CompCurve::D1(const Standard_Real U,
				gp_Pnt& P,
				gp_Vec& V) const
{
  Standard_Real u = U, d;
  Standard_Integer index = CurIndex;
  Prepare(u, d, index);
  myCurves->Value(index).D1(u, P, V);
  V*=d;
}

 void BRepAdaptor_CompCurve::D2(const Standard_Real U,
				gp_Pnt& P,
				gp_Vec& V1,
				gp_Vec& V2) const
{
  Standard_Real u = U, d;
  Standard_Integer index = CurIndex;
  Prepare(u, d, index);
  myCurves->Value(index).D2(u, P, V1, V2);
  V1*=d;
  V2 *= d*d;
}

 void BRepAdaptor_CompCurve::D3(const Standard_Real U,
				gp_Pnt& P,gp_Vec& V1,
				gp_Vec& V2,
				gp_Vec& V3) const
{
  Standard_Real u = U, d;
  Standard_Integer index = CurIndex;
  Prepare(u, d, index);
  myCurves->Value(index).D3(u, P, V1, V2, V3);
  V1*=d;
  V2 *= d*d;
  V3 *= d*d*d;
}

 gp_Vec BRepAdaptor_CompCurve::DN(const Standard_Real U,
				  const Standard_Integer N) const
{
  Standard_Real u = U, d;
  Standard_Integer index = CurIndex;
  Prepare(u, d, index);

  return (myCurves->Value(index).DN(u, N) * Pow(d, N));
}

 Standard_Real BRepAdaptor_CompCurve::Resolution(const Standard_Real R3d) const
{
  Standard_Real Res = 1.e200, r;
  Standard_Integer ii, L = myCurves->Length();
  for (ii=1; ii<=L; ii++) {
    r = myCurves->Value(ii).Resolution(R3d);
    if (r < Res) Res = r;
  }
  return Res;
}

 GeomAbs_CurveType BRepAdaptor_CompCurve::GetType() const
{
  return GeomAbs_OtherCurve; //temporary
//  if ( myCurves->Length() > 1) return GeomAbs_OtherCurve;
//  return myCurves->Value(1).GetType();
}

 gp_Lin BRepAdaptor_CompCurve::Line() const
{
  return myCurves->Value(1).Line();
}

 gp_Circ BRepAdaptor_CompCurve::Circle() const
{
  return myCurves->Value(1).Circle();
}

 gp_Elips BRepAdaptor_CompCurve::Ellipse() const
{
  return myCurves->Value(1).Ellipse();
}

 gp_Hypr BRepAdaptor_CompCurve::Hyperbola() const
{
  return myCurves->Value(1).Hyperbola();
}

 gp_Parab BRepAdaptor_CompCurve::Parabola() const
{
  return myCurves->Value(1).Parabola();
}

 Standard_Integer BRepAdaptor_CompCurve::Degree() const
{
  return myCurves->Value(1).Degree();
}

 Standard_Boolean BRepAdaptor_CompCurve::IsRational() const
{
  return myCurves->Value(1).IsRational();
}

 Standard_Integer BRepAdaptor_CompCurve::NbPoles() const
{
  return myCurves->Value(1).NbPoles();
}

 Standard_Integer BRepAdaptor_CompCurve::NbKnots() const
{
  return myCurves->Value(1).NbKnots();
}

 Handle(Geom_BezierCurve) BRepAdaptor_CompCurve::Bezier() const
{
  return myCurves->Value(1).Bezier();
}

 Handle(Geom_BSplineCurve) BRepAdaptor_CompCurve::BSpline() const
{
  return myCurves->Value(1).BSpline();
}

//=======================================================================
//function : Prepare
//purpose  :
// When the parameter is close to "node" the rule is determined
// depending on the sign of tol:
//   - negative -> Rule preceding to the node.
//   - positive -> Rule following after the node.
//=======================================================================

 void BRepAdaptor_CompCurve::Prepare(Standard_Real& W,
				     Standard_Real& Delta,
				     Standard_Integer& CurIndex) const
{
  Standard_Real f,l, Wtest, Eps;
  Standard_Integer ii;
  if (W-TFirst < TLast-W) { Eps = PTol; }
  else                    { Eps = -PTol;}


  Wtest = W+Eps; //Offset to discriminate the nodes
  if(Periodic){
    Wtest = ElCLib::InPeriod(Wtest,
			     0,
			     myPeriod);
    W = Wtest-Eps;
  }

  // Find the index
  Standard_Boolean Trouve = Standard_False;
  if (myKnots->Value(CurIndex) > Wtest) {
    for (ii=CurIndex-1; ii>0 && !Trouve; ii--)
      if (myKnots->Value(ii)<= Wtest) {
	CurIndex = ii;
	Trouve = Standard_True;
      }
    if (!Trouve) CurIndex = 1; // Out of limits...
  }

  else if (myKnots->Value(CurIndex+1) <= Wtest) {
    for (ii=CurIndex+1; ii<=myCurves->Length() && !Trouve; ii++)
      if (myKnots->Value(ii+1)> Wtest) {
	CurIndex = ii;
	Trouve = Standard_True;
      }
    if (!Trouve) CurIndex = myCurves->Length(); // Out of limits...
  }

  // Invert ?
  const TopoDS_Edge& E = myCurves->Value(CurIndex).Edge();
  TopAbs_Orientation Or = E.Orientation();
  Standard_Boolean Reverse;
  Reverse = (Forward && (Or == TopAbs_REVERSED)) ||
            (!Forward && (Or != TopAbs_REVERSED));

  // Calculate the local parameter
  BRep_Tool::Range(E, f, l);
  Delta = myKnots->Value(CurIndex+1) - myKnots->Value(CurIndex);
  if (Delta > PTol*1.e-9) Delta = (l-f)/Delta;

  if (Reverse) {
    Delta *= -1;
    W = l + (W-myKnots->Value(CurIndex)) * Delta;
  }
  else {
    W = f + (W-myKnots->Value(CurIndex)) * Delta;
  }
}

void  BRepAdaptor_CompCurve::InvPrepare(const Standard_Integer index,
					Standard_Real& First,
					Standard_Real& Delta) const
{
  // Invert?
  const TopoDS_Edge& E = myCurves->Value(index).Edge();
  TopAbs_Orientation Or = E.Orientation();
  Standard_Boolean Reverse;
  Reverse = (Forward && (Or == TopAbs_REVERSED)) ||
            (!Forward && (Or != TopAbs_REVERSED));

  // Calculate the parameters of reparametrisation
  // such as : T = Ti + (t-First)*Delta
  Standard_Real f, l;
  BRep_Tool::Range(E, f, l);
  Delta = myKnots->Value(index+1) - myKnots->Value(index);
  if (l-f > PTol*1.e-9) Delta /= (l-f);

  if (Reverse) {
    Delta *= -1;
    First = l;
  }
  else {
    First = f;
  }
}
