// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FEmTool_ListOfVectors_HeaderFile
#define _FEmTool_ListOfVectors_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_FEmTool_ListNodeOfListOfVectors_HeaderFile
#include <Handle_FEmTool_ListNodeOfListOfVectors.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class FEmTool_ListIteratorOfListOfVectors;
class TColStd_HArray1OfReal;
class FEmTool_ListNodeOfListOfVectors;



class FEmTool_ListOfVectors  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   FEmTool_ListOfVectors();
  
  Standard_EXPORT     void Assign(const FEmTool_ListOfVectors& Other) ;
    void operator=(const FEmTool_ListOfVectors& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~FEmTool_ListOfVectors()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Handle(TColStd_HArray1OfReal)& I) ;
  
  Standard_EXPORT     void Prepend(const Handle(TColStd_HArray1OfReal)& I,FEmTool_ListIteratorOfListOfVectors& theIt) ;
  
  Standard_EXPORT     void Prepend(FEmTool_ListOfVectors& Other) ;
  
  Standard_EXPORT     void Append(const Handle(TColStd_HArray1OfReal)& I) ;
  
  Standard_EXPORT     void Append(const Handle(TColStd_HArray1OfReal)& I,FEmTool_ListIteratorOfListOfVectors& theIt) ;
  
  Standard_EXPORT     void Append(FEmTool_ListOfVectors& Other) ;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfReal& First() const;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfReal& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(FEmTool_ListIteratorOfListOfVectors& It) ;
  
  Standard_EXPORT     void InsertBefore(const Handle(TColStd_HArray1OfReal)& I,FEmTool_ListIteratorOfListOfVectors& It) ;
  
  Standard_EXPORT     void InsertBefore(FEmTool_ListOfVectors& Other,FEmTool_ListIteratorOfListOfVectors& It) ;
  
  Standard_EXPORT     void InsertAfter(const Handle(TColStd_HArray1OfReal)& I,FEmTool_ListIteratorOfListOfVectors& It) ;
  
  Standard_EXPORT     void InsertAfter(FEmTool_ListOfVectors& Other,FEmTool_ListIteratorOfListOfVectors& It) ;


friend class FEmTool_ListIteratorOfListOfVectors;



protected:





private:

  
  Standard_EXPORT   FEmTool_ListOfVectors(const FEmTool_ListOfVectors& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Handle_TColStd_HArray1OfReal
#define Item_hxx <TColStd_HArray1OfReal.hxx>
#define TCollection_ListNode FEmTool_ListNodeOfListOfVectors
#define TCollection_ListNode_hxx <FEmTool_ListNodeOfListOfVectors.hxx>
#define TCollection_ListIterator FEmTool_ListIteratorOfListOfVectors
#define TCollection_ListIterator_hxx <FEmTool_ListIteratorOfListOfVectors.hxx>
#define Handle_TCollection_ListNode Handle_FEmTool_ListNodeOfListOfVectors
#define TCollection_ListNode_Type_() FEmTool_ListNodeOfListOfVectors_Type_()
#define TCollection_List FEmTool_ListOfVectors
#define TCollection_List_hxx <FEmTool_ListOfVectors.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
