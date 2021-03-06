// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ActionRequestAssignment_HeaderFile
#define _StepBasic_ActionRequestAssignment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_ActionRequestAssignment_HeaderFile
#include <Handle_StepBasic_ActionRequestAssignment.hxx>
#endif

#ifndef _Handle_StepBasic_VersionedActionRequest_HeaderFile
#include <Handle_StepBasic_VersionedActionRequest.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepBasic_VersionedActionRequest;


//! Representation of STEP entity ActionRequestAssignment <br>
class StepBasic_ActionRequestAssignment : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepBasic_ActionRequestAssignment();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(StepBasic_VersionedActionRequest)& aAssignedActionRequest) ;
  //! Returns field AssignedActionRequest <br>
  Standard_EXPORT     Handle_StepBasic_VersionedActionRequest AssignedActionRequest() const;
  //! Set field AssignedActionRequest <br>
  Standard_EXPORT     void SetAssignedActionRequest(const Handle(StepBasic_VersionedActionRequest)& AssignedActionRequest) ;




  DEFINE_STANDARD_RTTI(StepBasic_ActionRequestAssignment)

protected:




private: 


Handle_StepBasic_VersionedActionRequest theAssignedActionRequest;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
