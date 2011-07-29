// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_MeshEntityOwner_HeaderFile
#define _MeshVS_MeshEntityOwner_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MeshVS_MeshEntityOwner_HeaderFile
#include <Handle_MeshVS_MeshEntityOwner.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _MeshVS_EntityType_HeaderFile
#include <MeshVS_EntityType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _SelectMgr_EntityOwner_HeaderFile
#include <SelectMgr_EntityOwner.hxx>
#endif
#ifndef _SelectMgr_SOPtr_HeaderFile
#include <SelectMgr_SOPtr.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager_HeaderFile
#include <Handle_PrsMgr_PresentationManager.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager3d_HeaderFile
#include <Handle_PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
class PrsMgr_PresentationManager;
class PrsMgr_PresentationManager3d;


//! The custom owner. This class provides methods to store owner information: <br>
//!   1) An address of element or node data structure <br>
//!   2) Type of node or element owner assigned <br>
//!   3) ID of node or element owner assigned <br>
class MeshVS_MeshEntityOwner : public SelectMgr_EntityOwner {

public:

  
  Standard_EXPORT   MeshVS_MeshEntityOwner(const SelectMgr_SOPtr& SelObj,const Standard_Integer ID,const Standard_Address MeshEntity,const MeshVS_EntityType& Type,const Standard_Integer Priority = 0,const Standard_Boolean IsGroup = Standard_False);
  //! Returns an address of element or node data structure <br>
  Standard_EXPORT     Standard_Address Owner() const;
  //! Returns type of element or node data structure <br>
  Standard_EXPORT     MeshVS_EntityType Type() const;
  //! Returns ID of element or node data structure <br>
  Standard_EXPORT     Standard_Integer ID() const;
  //! Returns true if owner represents group of nodes or elements <br>
  Standard_EXPORT     Standard_Boolean IsGroup() const;
  //! Returns true if owner is hilighted <br>
  Standard_EXPORT   virtual  Standard_Boolean IsHilighted(const Handle(PrsMgr_PresentationManager)& PM,const Standard_Integer Mode = 0) const;
  //! Hilights owner <br>
  Standard_EXPORT   virtual  void Hilight() ;
  //! Hilights owner <br>
  Standard_EXPORT   virtual  void Hilight(const Handle(PrsMgr_PresentationManager)& PM,const Standard_Integer Mode = 0) ;
  //! Hilights owner with the certain color <br>
  Standard_EXPORT   virtual  void HilightWithColor(const Handle(PrsMgr_PresentationManager3d)& PM,const Quantity_NameOfColor theColor,const Standard_Integer Mode = 0) ;
  //! Strip hilight of owner <br>
  Standard_EXPORT   virtual  void Unhilight(const Handle(PrsMgr_PresentationManager)& PM,const Standard_Integer Mode = 0) ;
  
  Standard_EXPORT   virtual  void Clear(const Handle(PrsMgr_PresentationManager)& PM,const Standard_Integer Mode = 0) ;




  DEFINE_STANDARD_RTTI(MeshVS_MeshEntityOwner)

protected:




private: 


Standard_Address myAddr;
MeshVS_EntityType myType;
Standard_Integer myID;
Standard_Boolean myIsGroup;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif