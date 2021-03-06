// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCE2d_MakeArcOfCircle_HeaderFile
#define _GCE2d_MakeArcOfCircle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom2d_TrimmedCurve_HeaderFile
#include <Handle_Geom2d_TrimmedCurve.hxx>
#endif
#ifndef _GCE2d_Root_HeaderFile
#include <GCE2d_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom2d_TrimmedCurve;
class StdFail_NotDone;
class gp_Circ2d;
class gp_Pnt2d;
class gp_Vec2d;


//! Implements construction algorithms for an arc of <br>
//! circle in the plane. The result is a Geom2d_TrimmedCurve curve. <br>
//! A MakeArcOfCircle object provides a framework for: <br>
//! -   defining the construction of the arc of circle, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the results. In particular, the Value <br>
//!   function returns the constructed arc of circle. <br>
class GCE2d_MakeArcOfCircle  : public GCE2d_Root {
public:

  DEFINE_STANDARD_ALLOC

  //! Makes an arc of circle (TrimmedCurve from Geom2d) from <br>
//!          a circle between two parameters Alpha1 and Alpha2. <br>
//!          The two parameters are angles. The parameters are <br>
//!          in radians. <br>
  Standard_EXPORT   GCE2d_MakeArcOfCircle(const gp_Circ2d& Circ,const Standard_Real Alpha1,const Standard_Real Alpha2,const Standard_Boolean Sense = Standard_True);
  //! Makes an arc of circle (TrimmedCurve from Geom2d) from <br>
//!          a circle between point <P> and the parameter <br>
//!          Alpha. Alpha is given in radians. <br>
  Standard_EXPORT   GCE2d_MakeArcOfCircle(const gp_Circ2d& Circ,const gp_Pnt2d& P,const Standard_Real Alpha,const Standard_Boolean Sense = Standard_True);
  //! Makes an arc of circle (TrimmedCurve from Geom2d) from <br>
//!          a circle between two points P1 and P2. <br>
  Standard_EXPORT   GCE2d_MakeArcOfCircle(const gp_Circ2d& Circ,const gp_Pnt2d& P1,const gp_Pnt2d& P2,const Standard_Boolean Sense = Standard_True);
  //! Makes an arc of circle (TrimmedCurve from Geom2d) from <br>
//!          three points P1,P2,P3 between two points P1 and P3, <br>
//!          and passing through the point P2. <br>
  Standard_EXPORT   GCE2d_MakeArcOfCircle(const gp_Pnt2d& P1,const gp_Pnt2d& P2,const gp_Pnt2d& P3);
  //! Makes an arc of circle (TrimmedCurve from Geom2d) from <br>
//!          two points P1,P2 and the tangente to the solution at <br>
//!          the point P1. <br>
  Standard_EXPORT   GCE2d_MakeArcOfCircle(const gp_Pnt2d& P1,const gp_Vec2d& V,const gp_Pnt2d& P2);
  //! Returns the constructed arc of circle. <br>
//! Exceptions StdFail_NotDone if no arc of circle is constructed. <br>
  Standard_EXPORT    const Handle_Geom2d_TrimmedCurve& Value() const;
  
  Standard_EXPORT    const Handle_Geom2d_TrimmedCurve& Operator() const;
Standard_EXPORT operator Handle_Geom2d_TrimmedCurve() const;





protected:





private:



Handle_Geom2d_TrimmedCurve TheArc;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
