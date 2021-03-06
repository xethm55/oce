// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AdvApprox_SimpleApprox_HeaderFile
#define _AdvApprox_SimpleApprox_HeaderFile

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
#ifndef _Handle_PLib_JacobiPolynomial_HeaderFile
#include <Handle_PLib_JacobiPolynomial.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfReal_HeaderFile
#include <Handle_TColStd_HArray2OfReal.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _AdvApprox_EvaluatorFunction_HeaderFile
#include <AdvApprox_EvaluatorFunction.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class PLib_JacobiPolynomial;
class TColStd_HArray1OfReal;
class TColStd_HArray2OfReal;
class Standard_OutOfRange;
class Standard_ConstructionError;
class TColStd_Array1OfInteger;
class TColStd_Array1OfReal;


//! Approximate  a function on   an intervall [First,Last] <br>
//!          The result  is  a simple  polynomial  whose  degree is  as low as <br>
//!          possible  to   satisfy  the required  tolerance  and  the <br>
//!          maximum degree.  The maximum  error and the averrage error <br>
//!          resulting from  approximating the function by the polynomial are computed <br>
class AdvApprox_SimpleApprox  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   AdvApprox_SimpleApprox(const Standard_Integer TotalDimension,const Standard_Integer TotalNumSS,const GeomAbs_Shape Continuity,const Standard_Integer WorkDegree,const Standard_Integer NbGaussPoints,const Handle(PLib_JacobiPolynomial)& JacobiBase,const AdvApprox_EvaluatorFunction& Func);
  //! Constructs approximator tool. <br>
//! <br>
//!  Warning: <br>
//!     the Func should be valid reference to object of type <br>
//!     inherited from class EvaluatorFunction from Approx <br>
//!     with life time longer than that of the approximator tool; <br>
//! <br>
  Standard_EXPORT     void Perform(const TColStd_Array1OfInteger& LocalDimension,const TColStd_Array1OfReal& LocalTolerancesArray,const Standard_Real First,const Standard_Real Last,const Standard_Integer MaxDegree) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Standard_Integer Degree() const;
  //! returns the coefficients in the Jacobi Base <br>
  Standard_EXPORT     Handle_TColStd_HArray1OfReal Coefficients() const;
  //! returns the constraints at First <br>
  Standard_EXPORT     Handle_TColStd_HArray2OfReal FirstConstr() const;
  //! returns the constraints at Last <br>
  Standard_EXPORT     Handle_TColStd_HArray2OfReal LastConstr() const;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfReal SomTab() const;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfReal DifTab() const;
  
  Standard_EXPORT     Standard_Real MaxError(const Standard_Integer Index) const;
  
  Standard_EXPORT     Standard_Real AverageError(const Standard_Integer Index) const;
  //! display information on approximation <br>
  Standard_EXPORT     void Dump(Standard_OStream& o) const;





protected:





private:



Standard_Integer myTotalNumSS;
Standard_Integer myTotalDimension;
Standard_Integer myNbGaussPoints;
Standard_Integer myWorkDegree;
Standard_Integer myNivConstr;
Handle_PLib_JacobiPolynomial myJacPol;
Handle_TColStd_HArray1OfReal myTabPoints;
Handle_TColStd_HArray2OfReal myTabWeights;
Standard_Address myEvaluator;
Standard_Integer myDegree;
Handle_TColStd_HArray1OfReal myCoeff;
Handle_TColStd_HArray2OfReal myFirstConstr;
Handle_TColStd_HArray2OfReal myLastConstr;
Handle_TColStd_HArray1OfReal mySomTab;
Handle_TColStd_HArray1OfReal myDifTab;
Handle_TColStd_HArray1OfReal myMaxError;
Handle_TColStd_HArray1OfReal myAverageError;
Standard_Boolean done;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
