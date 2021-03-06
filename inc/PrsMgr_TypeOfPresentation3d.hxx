// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PrsMgr_TypeOfPresentation3d_HeaderFile
#define _PrsMgr_TypeOfPresentation3d_HeaderFile

//! To declare the type of presentation as follows <br>
//! -   AllView for display involving no recalculation for <br>
//!   new projectors (points of view)in hidden line removal mode <br>
//! -   ProjectorDependant for display in hidden line <br>
//!   removal mode, where every new point of view <br>
//!   entails recalculation of the display. <br>
enum PrsMgr_TypeOfPresentation3d {
PrsMgr_TOP_AllView,
PrsMgr_TOP_ProjectorDependant
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
