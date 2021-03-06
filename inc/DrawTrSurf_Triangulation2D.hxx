// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawTrSurf_Triangulation2D_HeaderFile
#define _DrawTrSurf_Triangulation2D_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DrawTrSurf_Triangulation2D_HeaderFile
#include <Handle_DrawTrSurf_Triangulation2D.hxx>
#endif

#ifndef _Handle_Poly_Triangulation_HeaderFile
#include <Handle_Poly_Triangulation.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Draw_Drawable2D_HeaderFile
#include <Draw_Drawable2D.hxx>
#endif
#ifndef _Handle_Draw_Drawable3D_HeaderFile
#include <Handle_Draw_Drawable3D.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Poly_Triangulation;
class TColStd_HArray1OfInteger;
class Draw_Display;
class Draw_Drawable3D;
class Draw_Interpretor;


//! Used to display a 2d triangulation. <br>
//! <br>
//!          Display internal edges in blue <br>
//!          Display boundary edges in red <br>
//!          Optional display of triangles and nodes indices. <br>
class DrawTrSurf_Triangulation2D : public Draw_Drawable2D {

public:

  
  Standard_EXPORT   DrawTrSurf_Triangulation2D(const Handle(Poly_Triangulation)& T);
  
  Standard_EXPORT     Handle_Poly_Triangulation Triangulation() const;
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  //! For variable copy. <br>
  Standard_EXPORT   virtual  Handle_Draw_Drawable3D Copy() const;
  //! For variable dump. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S) const;
  //! For variable whatis command. Set  as a result  the <br>
//!          type of the variable. <br>
  Standard_EXPORT   virtual  void Whatis(Draw_Interpretor& I) const;




  DEFINE_STANDARD_RTTI(DrawTrSurf_Triangulation2D)

protected:




private: 


Handle_Poly_Triangulation myTriangulation;
Handle_TColStd_HArray1OfInteger myInternals;
Handle_TColStd_HArray1OfInteger myFree;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
