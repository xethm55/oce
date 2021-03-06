// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AppliedGroupAssignment_HeaderFile
#define _StepAP214_AppliedGroupAssignment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepAP214_AppliedGroupAssignment_HeaderFile
#include <Handle_StepAP214_AppliedGroupAssignment.hxx>
#endif

#ifndef _Handle_StepAP214_HArray1OfGroupItem_HeaderFile
#include <Handle_StepAP214_HArray1OfGroupItem.hxx>
#endif
#ifndef _StepBasic_GroupAssignment_HeaderFile
#include <StepBasic_GroupAssignment.hxx>
#endif
#ifndef _Handle_StepBasic_Group_HeaderFile
#include <Handle_StepBasic_Group.hxx>
#endif
class StepAP214_HArray1OfGroupItem;
class StepBasic_Group;


//! Representation of STEP entity AppliedGroupAssignment <br>
class StepAP214_AppliedGroupAssignment : public StepBasic_GroupAssignment {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepAP214_AppliedGroupAssignment();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(StepBasic_Group)& aGroupAssignment_AssignedGroup,const Handle(StepAP214_HArray1OfGroupItem)& aItems) ;
  //! Returns field Items <br>
  Standard_EXPORT     Handle_StepAP214_HArray1OfGroupItem Items() const;
  //! Set field Items <br>
  Standard_EXPORT     void SetItems(const Handle(StepAP214_HArray1OfGroupItem)& Items) ;




  DEFINE_STANDARD_RTTI(StepAP214_AppliedGroupAssignment)

protected:




private: 


Handle_StepAP214_HArray1OfGroupItem theItems;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
