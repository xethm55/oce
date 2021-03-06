// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean_HeaderFile
#define _MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_MeshVS_DataMapNodeOfDataMapOfIntegerBoolean_HeaderFile
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerBoolean.hxx>
#endif
class Standard_NoSuchObject;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfIntegerBoolean;
class MeshVS_DataMapNodeOfDataMapOfIntegerBoolean;



class MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean();
  
  Standard_EXPORT   MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean(const MeshVS_DataMapOfIntegerBoolean& aMap);
  
  Standard_EXPORT     void Initialize(const MeshVS_DataMapOfIntegerBoolean& aMap) ;
  
  Standard_EXPORT    const Standard_Integer& Key() const;
  
  Standard_EXPORT    const Standard_Boolean& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
