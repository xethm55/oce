// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_ConicalSurface_HeaderFile
#define _PGeom_ConicalSurface_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom_ConicalSurface_HeaderFile
#include <Handle_PGeom_ConicalSurface.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _PGeom_ElementarySurface_HeaderFile
#include <PGeom_ElementarySurface.hxx>
#endif
class gp_Ax3;


class PGeom_ConicalSurface : public PGeom_ElementarySurface {

public:

  //! Creates a ConicalSurface with default values. <br>
  Standard_EXPORT   PGeom_ConicalSurface();
  //! Creates a ConicalSurface with these values. <br>
  Standard_EXPORT   PGeom_ConicalSurface(const gp_Ax3& aPosition,const Standard_Real aRadius,const Standard_Real aSemiAngle);
  //! Set the field radius with <aRadius>. <br>
  Standard_EXPORT     void Radius(const Standard_Real aRadius) ;
  //! Returns the value of the field radius. <br>
  Standard_EXPORT     Standard_Real Radius() const;
  //! Set the value of the field semiAngle with <aSemiAngle>. <br>
  Standard_EXPORT     void SemiAngle(const Standard_Real aSemiAngle) ;
  //! Returns the value of the field semiAngle. <br>
  Standard_EXPORT     Standard_Real SemiAngle() const;

PGeom_ConicalSurface(const Storage_stCONSTclCOM& a) : PGeom_ElementarySurface(a)
{
  
}
    Standard_Real _CSFDB_GetPGeom_ConicalSurfaceradius() const { return radius; }
    void _CSFDB_SetPGeom_ConicalSurfaceradius(const Standard_Real p) { radius = p; }
    Standard_Real _CSFDB_GetPGeom_ConicalSurfacesemiAngle() const { return semiAngle; }
    void _CSFDB_SetPGeom_ConicalSurfacesemiAngle(const Standard_Real p) { semiAngle = p; }



  DEFINE_STANDARD_RTTI(PGeom_ConicalSurface)

protected:




private: 


Standard_Real radius;
Standard_Real semiAngle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
