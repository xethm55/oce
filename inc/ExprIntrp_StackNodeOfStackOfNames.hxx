// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_StackNodeOfStackOfNames_HeaderFile
#define _ExprIntrp_StackNodeOfStackOfNames_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ExprIntrp_StackNodeOfStackOfNames_HeaderFile
#include <Handle_ExprIntrp_StackNodeOfStackOfNames.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TCollection_AsciiString;
class ExprIntrp_StackOfNames;
class ExprIntrp_StackIteratorOfStackOfNames;



class ExprIntrp_StackNodeOfStackOfNames : public TCollection_MapNode {

public:

  
      ExprIntrp_StackNodeOfStackOfNames(const TCollection_AsciiString& I,const TCollection_MapNodePtr& n);
  
        TCollection_AsciiString& Value() const;




  DEFINE_STANDARD_RTTI(ExprIntrp_StackNodeOfStackOfNames)

protected:




private: 


TCollection_AsciiString myValue;


};

#define Item TCollection_AsciiString
#define Item_hxx <TCollection_AsciiString.hxx>
#define TCollection_StackNode ExprIntrp_StackNodeOfStackOfNames
#define TCollection_StackNode_hxx <ExprIntrp_StackNodeOfStackOfNames.hxx>
#define TCollection_StackIterator ExprIntrp_StackIteratorOfStackOfNames
#define TCollection_StackIterator_hxx <ExprIntrp_StackIteratorOfStackOfNames.hxx>
#define Handle_TCollection_StackNode Handle_ExprIntrp_StackNodeOfStackOfNames
#define TCollection_StackNode_Type_() ExprIntrp_StackNodeOfStackOfNames_Type_()
#define TCollection_Stack ExprIntrp_StackOfNames
#define TCollection_Stack_hxx <ExprIntrp_StackOfNames.hxx>

#include <TCollection_StackNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_StackNode
#undef TCollection_StackNode_hxx
#undef TCollection_StackIterator
#undef TCollection_StackIterator_hxx
#undef Handle_TCollection_StackNode
#undef TCollection_StackNode_Type_
#undef TCollection_Stack
#undef TCollection_Stack_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
