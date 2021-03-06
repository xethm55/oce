// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HSequenceOfHAsciiString_HeaderFile
#define _TColStd_HSequenceOfHAsciiString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif

#ifndef _TColStd_SequenceOfHAsciiString_HeaderFile
#include <TColStd_SequenceOfHAsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TCollection_HAsciiString;
class TColStd_SequenceOfHAsciiString;



class TColStd_HSequenceOfHAsciiString : public MMgt_TShared {

public:

  
      TColStd_HSequenceOfHAsciiString();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(TCollection_HAsciiString)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(TColStd_HSequenceOfHAsciiString)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(TCollection_HAsciiString)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(TColStd_HSequenceOfHAsciiString)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(TCollection_HAsciiString)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(TColStd_HSequenceOfHAsciiString)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(TCollection_HAsciiString)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(TColStd_HSequenceOfHAsciiString)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(TCollection_HAsciiString)& anItem) ;
  
  Standard_EXPORT    const Handle_TCollection_HAsciiString& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const TColStd_SequenceOfHAsciiString& Sequence() const;
  
        TColStd_SequenceOfHAsciiString& ChangeSequence() ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString ShallowCopy() const;




  DEFINE_STANDARD_RTTI(TColStd_HSequenceOfHAsciiString)

protected:




private: 


TColStd_SequenceOfHAsciiString mySequence;


};

#define Item Handle_TCollection_HAsciiString
#define Item_hxx <TCollection_HAsciiString.hxx>
#define TheSequence TColStd_SequenceOfHAsciiString
#define TheSequence_hxx <TColStd_SequenceOfHAsciiString.hxx>
#define TCollection_HSequence TColStd_HSequenceOfHAsciiString
#define TCollection_HSequence_hxx <TColStd_HSequenceOfHAsciiString.hxx>
#define Handle_TCollection_HSequence Handle_TColStd_HSequenceOfHAsciiString
#define TCollection_HSequence_Type_() TColStd_HSequenceOfHAsciiString_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_TColStd_HSequenceOfHAsciiString ShallowCopy(const Handle_TColStd_HSequenceOfHAsciiString& me) {
 return me->ShallowCopy();
}



#endif
