// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTest_DrawableShape_HeaderFile
#define _BOPTest_DrawableShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOPTest_DrawableShape_HeaderFile
#include <Handle_BOPTest_DrawableShape.hxx>
#endif

#ifndef _Handle_Draw_Text3D_HeaderFile
#include <Handle_Draw_Text3D.hxx>
#endif
#ifndef _Draw_Color_HeaderFile
#include <Draw_Color.hxx>
#endif
#ifndef _DBRep_DrawableShape_HeaderFile
#include <DBRep_DrawableShape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class Draw_Text3D;
class TopoDS_Shape;
class Draw_Color;
class gp_Pnt;
class Draw_Display;



class BOPTest_DrawableShape : public DBRep_DrawableShape {

public:

  
  Standard_EXPORT   BOPTest_DrawableShape(const TopoDS_Shape& S,const Draw_Color& FreeCol,const Draw_Color& ConnCol,const Draw_Color& EdgeCol,const Draw_Color& IsosCol,const Standard_Real size,const Standard_Integer nbisos,const Standard_Integer discret,const Standard_CString Text,const Draw_Color& TextColor);
  
  Standard_EXPORT   BOPTest_DrawableShape(const TopoDS_Shape& S,const Standard_CString Text,const Draw_Color& TextColor);
  
  Standard_EXPORT   virtual  void DrawOn(Draw_Display& dis) const;




  DEFINE_STANDARD_RTTI(BOPTest_DrawableShape)

protected:




private: 

  
  Standard_EXPORT     gp_Pnt Pnt() const;

Handle_Draw_Text3D myText;
Draw_Color myTextColor;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
