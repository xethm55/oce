// Created by: CKY / Contract Toubro-Larsen
// Copyright (c) 1993-1999 Matra Datavision
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

//--------------------------------------------------------------------
//--------------------------------------------------------------------

#include <IGESDimen_WitnessLine.ixx>
#include <Standard_DimensionMismatch.hxx>
#include <IGESData_LineFontEntity.hxx>
#include <gp_GTrsf.hxx>


IGESDimen_WitnessLine::IGESDimen_WitnessLine ()    {  }


    void  IGESDimen_WitnessLine::Init
  (const Standard_Integer dataType, const Standard_Real aDisp,
   const Handle(TColgp_HArray1OfXY)& dataPoints)
{
  if (dataPoints->Lower() != 1)
    Standard_DimensionMismatch::Raise("IGESDimen_WitnessLine : Init");
  theDatatype      = dataType;
  theZDisplacement = aDisp;
  theDataPoints    = dataPoints;
  InitTypeAndForm(106,40);
}


    Standard_Integer  IGESDimen_WitnessLine::Datatype () const 
{
  return theDatatype;
}

    Standard_Integer  IGESDimen_WitnessLine::NbPoints () const 
{
  return theDataPoints->Length();
}

    Standard_Real  IGESDimen_WitnessLine::ZDisplacement () const 
{
  return theZDisplacement;
}

    gp_Pnt IGESDimen_WitnessLine::Point (const Standard_Integer Index) const 
{
  gp_XY tempXY = theDataPoints->Value(Index);
  gp_Pnt point(tempXY.X(), tempXY.Y(), theZDisplacement);
  return point;
}

    gp_Pnt  IGESDimen_WitnessLine::TransformedPoint
  (const Standard_Integer Index) const 
{
  gp_XY point2d = theDataPoints->Value(Index);
  gp_XYZ point(point2d.X(), point2d.Y(), theZDisplacement);
  if (HasTransf()) Location().Transforms(point);
  return gp_Pnt(point);
}
