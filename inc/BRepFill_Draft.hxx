// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_Draft_HeaderFile
#define _BRepFill_Draft_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_BRepFill_DraftLaw_HeaderFile
#include <Handle_BRepFill_DraftLaw.hxx>
#endif
#ifndef _Handle_BRepFill_SectionLaw_HeaderFile
#include <Handle_BRepFill_SectionLaw.hxx>
#endif
#ifndef _Handle_TopTools_HArray2OfShape_HeaderFile
#include <Handle_TopTools_HArray2OfShape.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopoDS_Shell_HeaderFile
#include <TopoDS_Shell.hxx>
#endif
#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _BRepFill_TransitionStyle_HeaderFile
#include <BRepFill_TransitionStyle.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
class BRepFill_DraftLaw;
class BRepFill_SectionLaw;
class TopTools_HArray2OfShape;
class StdFail_NotDone;
class TopoDS_Shape;
class gp_Dir;
class Geom_Surface;
class TopoDS_Shell;
class TopTools_ListOfShape;
class Bnd_Box;



class BRepFill_Draft  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepFill_Draft(const TopoDS_Shape& Shape,const gp_Dir& Dir,const Standard_Real Angle);
  
  Standard_EXPORT     void SetOptions(const BRepFill_TransitionStyle Style = BRepFill_Right,const Standard_Real AngleMin = 0.01,const Standard_Real AngleMax = 3.0) ;
  
  Standard_EXPORT     void SetDraft(const Standard_Boolean IsInternal = Standard_False) ;
  
  Standard_EXPORT     void Perform(const Standard_Real LengthMax) ;
  
  Standard_EXPORT     void Perform(const Handle(Geom_Surface)& Surface,const Standard_Boolean KeepInsideSurface = Standard_True) ;
  
  Standard_EXPORT     void Perform(const TopoDS_Shape& StopShape,const Standard_Boolean KeepOutSide = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the draft surface <br>
//!          To have the complete shape <br>
//!          you have to use the Shape() methode. <br>
  Standard_EXPORT     TopoDS_Shell Shell() const;
  //! Returns the  list   of shapes generated   from the <br>
//!          shape <S>. <br>
  Standard_EXPORT    const TopTools_ListOfShape& Generated(const TopoDS_Shape& S) ;
  
  Standard_EXPORT     TopoDS_Shape Shape() const;





protected:





private:

  
  Standard_EXPORT     void Init(const Handle(Geom_Surface)& Surf,const Standard_Real Length,const Bnd_Box& Box) ;
  
  Standard_EXPORT     void BuildShell(const Handle(Geom_Surface)& Surf,const Standard_Boolean KeepOutSide = Standard_False) ;
  
  Standard_EXPORT     Standard_Boolean Fuse(const TopoDS_Shape& S,const Standard_Boolean KeepOutSide) ;
  
  Standard_EXPORT     Standard_Boolean Sewing() ;


gp_Dir myDir;
Standard_Real myAngle;
Standard_Real angmin;
Standard_Real angmax;
Standard_Real myTol;
Handle_BRepFill_DraftLaw myLoc;
Handle_BRepFill_SectionLaw mySec;
Handle_TopTools_HArray2OfShape mySections;
Handle_TopTools_HArray2OfShape myFaces;
TopTools_ListOfShape myGenerated;
TopoDS_Shape myShape;
TopoDS_Shape myTop;
TopoDS_Shell myShell;
TopoDS_Wire myWire;
GeomAbs_Shape myCont;
BRepFill_TransitionStyle myStyle;
Standard_Boolean IsInternal;
Standard_Boolean myDone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
