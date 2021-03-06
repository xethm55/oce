// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_Array1OfTextFontDef_HeaderFile
#define _IGESGraph_Array1OfTextFontDef_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESGraph_TextFontDef_HeaderFile
#include <Handle_IGESGraph_TextFontDef.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESGraph_TextFontDef;



class IGESGraph_Array1OfTextFontDef  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   IGESGraph_Array1OfTextFontDef(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESGraph_Array1OfTextFontDef(const Handle(IGESGraph_TextFontDef)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(IGESGraph_TextFontDef)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~IGESGraph_Array1OfTextFontDef()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const IGESGraph_Array1OfTextFontDef& Assign(const IGESGraph_Array1OfTextFontDef& Other) ;
   const IGESGraph_Array1OfTextFontDef& operator =(const IGESGraph_Array1OfTextFontDef& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESGraph_TextFontDef)& Value) ;
  
       const Handle_IGESGraph_TextFontDef& Value(const Standard_Integer Index) const;
     const Handle_IGESGraph_TextFontDef& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_IGESGraph_TextFontDef& ChangeValue(const Standard_Integer Index) ;
      Handle_IGESGraph_TextFontDef& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   IGESGraph_Array1OfTextFontDef(const IGESGraph_Array1OfTextFontDef& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_IGESGraph_TextFontDef
#define Array1Item_hxx <IGESGraph_TextFontDef.hxx>
#define TCollection_Array1 IGESGraph_Array1OfTextFontDef
#define TCollection_Array1_hxx <IGESGraph_Array1OfTextFontDef.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
