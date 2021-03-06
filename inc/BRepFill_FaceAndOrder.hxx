// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_FaceAndOrder_HeaderFile
#define _BRepFill_FaceAndOrder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class BRepFill_Filling;
class TopoDS_Face;


//! A structure containing Face and Order of constraint <br>
class BRepFill_FaceAndOrder  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepFill_FaceAndOrder();
  
  Standard_EXPORT   BRepFill_FaceAndOrder(const TopoDS_Face& aFace,const GeomAbs_Shape anOrder);


friend class BRepFill_Filling;



protected:





private:



TopoDS_Face myFace;
GeomAbs_Shape myOrder;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
