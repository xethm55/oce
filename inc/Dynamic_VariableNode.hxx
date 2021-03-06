// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_VariableNode_HeaderFile
#define _Dynamic_VariableNode_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dynamic_VariableNode_HeaderFile
#include <Handle_Dynamic_VariableNode.hxx>
#endif

#ifndef _Handle_Dynamic_VariableNode_HeaderFile
#include <Handle_Dynamic_VariableNode.hxx>
#endif
#ifndef _Handle_Dynamic_Variable_HeaderFile
#include <Handle_Dynamic_Variable.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class Dynamic_Variable;



class Dynamic_VariableNode : public MMgt_TShared {

public:

  
  Standard_EXPORT   Dynamic_VariableNode();
  
  Standard_EXPORT   Dynamic_VariableNode(const Handle(Dynamic_Variable)& anitem);
  
  Standard_EXPORT     void Object(const Handle(Dynamic_Variable)& anitem) ;
  
  Standard_EXPORT     Handle_Dynamic_Variable Object() const;
  
  Standard_EXPORT     void Next(const Handle(Dynamic_VariableNode)& anode) ;
  
  Standard_EXPORT     Handle_Dynamic_VariableNode Next() const;




  DEFINE_STANDARD_RTTI(Dynamic_VariableNode)

protected:




private: 


Handle_Dynamic_VariableNode thenextnode;
Handle_Dynamic_Variable theitem;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
