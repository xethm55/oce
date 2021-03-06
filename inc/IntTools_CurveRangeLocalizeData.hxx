// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_CurveRangeLocalizeData_HeaderFile
#define _IntTools_CurveRangeLocalizeData_HeaderFile

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
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _IntTools_MapOfCurveSample_HeaderFile
#include <IntTools_MapOfCurveSample.hxx>
#endif
#ifndef _IntTools_DataMapOfCurveSampleBox_HeaderFile
#include <IntTools_DataMapOfCurveSampleBox.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IntTools_CurveRangeSample;
class Bnd_Box;
class IntTools_ListOfCurveRangeSample;



class IntTools_CurveRangeLocalizeData  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   IntTools_CurveRangeLocalizeData(const Standard_Integer theNbSample,const Standard_Real theMinRange);
  
        Standard_Integer GetNbSample() const;
  
        Standard_Real GetMinRange() const;
  
  Standard_EXPORT     void AddOutRange(const IntTools_CurveRangeSample& theRange) ;
  
  Standard_EXPORT     void AddBox(const IntTools_CurveRangeSample& theRange,const Bnd_Box& theBox) ;
  
  Standard_EXPORT     Standard_Boolean FindBox(const IntTools_CurveRangeSample& theRange,Bnd_Box& theBox) const;
  
  Standard_EXPORT     Standard_Boolean IsRangeOut(const IntTools_CurveRangeSample& theRange) const;
  
  Standard_EXPORT     void ListRangeOut(IntTools_ListOfCurveRangeSample& theList) const;





protected:





private:



Standard_Integer myNbSampleC;
Standard_Real myMinRangeC;
IntTools_MapOfCurveSample myMapRangeOut;
IntTools_DataMapOfCurveSampleBox myMapBox;


};


#include <IntTools_CurveRangeLocalizeData.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
