// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_EdgeSet_HeaderFile
#define _BOPTools_EdgeSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _BOPCol_MapOfShape_HeaderFile
#include <BOPCol_MapOfShape.hxx>
#endif
#ifndef _BOPCol_ListOfShape_HeaderFile
#include <BOPCol_ListOfShape.hxx>
#endif
#ifndef _BOPCol_BaseAllocator_HeaderFile
#include <BOPCol_BaseAllocator.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopoDS_Shape;
class TopoDS_Edge;



class BOPTools_EdgeSet  {
public:

  DEFINE_STANDARD_ALLOC

  
      BOPTools_EdgeSet();
virtual ~BOPTools_EdgeSet();
  
      BOPTools_EdgeSet(const BOPCol_BaseAllocator& theAllocator);
  
        void SetShape(const TopoDS_Shape& theS) ;
  
       const TopoDS_Shape& Shape() const;
  
        void AddEdge(const TopoDS_Edge& theEdge) ;
  
  Standard_EXPORT     void AddEdges(const BOPCol_ListOfShape& theLS) ;
  
        void AddEdges(const TopoDS_Shape& theFace) ;
  
        void Clear() ;
  
        void Get(BOPCol_ListOfShape& theLS) const;
  
        Standard_Boolean Contains(const BOPTools_EdgeSet& theSet) const;





protected:



TopoDS_Shape myShape;
BOPCol_MapOfShape myMap;
BOPCol_ListOfShape myEdges;


private:





};


#include <BOPTools_EdgeSet.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
