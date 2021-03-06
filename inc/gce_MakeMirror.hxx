// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gce_MakeMirror_HeaderFile
#define _gce_MakeMirror_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Trsf_HeaderFile
#include <gp_Trsf.hxx>
#endif
class gp_Pnt;
class gp_Ax1;
class gp_Lin;
class gp_Dir;
class gp_Pln;
class gp_Ax2;
class gp_Trsf;


//! This class mplements elementary construction algorithms for a <br>
//! symmetrical transformation in 3D space about a point, <br>
//! axis or plane. The result is a gp_Trsf transformation. <br>
//! A MakeMirror object provides a framework for: <br>
//! -   defining the construction of the transformation, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
class gce_MakeMirror  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   gce_MakeMirror(const gp_Pnt& Point);
  
  Standard_EXPORT   gce_MakeMirror(const gp_Ax1& Axis);
  
  Standard_EXPORT   gce_MakeMirror(const gp_Lin& Line);
  //! Makes a symmetry transformation af axis defined by <br>
//!          <Point> and <Direc>. <br>
  Standard_EXPORT   gce_MakeMirror(const gp_Pnt& Point,const gp_Dir& Direc);
  //! Makes a symmetry transformation of plane <Plane>. <br>
  Standard_EXPORT   gce_MakeMirror(const gp_Pln& Plane);
  //! Makes a symmetry transformation of plane <Plane>. <br>
  Standard_EXPORT   gce_MakeMirror(const gp_Ax2& Plane);
  //! Returns the constructed transformation. <br>
  Standard_EXPORT    const gp_Trsf& Value() const;
  
  Standard_EXPORT    const gp_Trsf& Operator() const;
Standard_EXPORT operator gp_Trsf() const;





protected:





private:



gp_Trsf TheMirror;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
