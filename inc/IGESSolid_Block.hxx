// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_Block_HeaderFile
#define _IGESSolid_Block_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSolid_Block_HeaderFile
#include <Handle_IGESSolid_Block.hxx>
#endif

#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class gp_XYZ;
class gp_Pnt;
class gp_Dir;


//! defines Block, Type <150> Form Number <0> <br>
//!          in package IGESSolid <br>
//!          The Block is a rectangular parallelopiped, defined with <br>
//!          one vertex at (X1, Y1, Z1) and three edges lying along <br>
//!          the local +X, +Y, +Z axes. <br>
class IGESSolid_Block : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESSolid_Block();
  //! This method is used to set the fields of the class Block <br>
//!       - aSize   : Length in each local directions <br>
//!       - aCorner : Corner point coordinates. Default (0,0,0) <br>
//!       - aXAxis  : Unit vector defining local X-axis <br>
//!                       default (1,0,0) <br>
//!       - aZAxis  : Unit vector defining local Z-axis <br>
//!                       default (0,0,1) <br>
  Standard_EXPORT     void Init(const gp_XYZ& aSize,const gp_XYZ& aCorner,const gp_XYZ& aXAxis,const gp_XYZ& aZAxis) ;
  //! returns the size of the block <br>
  Standard_EXPORT     gp_XYZ Size() const;
  //! returns the length of the Block along the local X-direction <br>
  Standard_EXPORT     Standard_Real XLength() const;
  //! returns the length of the Block along the local Y-direction <br>
  Standard_EXPORT     Standard_Real YLength() const;
  //! returns the length of the Block along the local Z-direction <br>
  Standard_EXPORT     Standard_Real ZLength() const;
  //! returns the corner point coordinates of the Block <br>
  Standard_EXPORT     gp_Pnt Corner() const;
  //! returns the corner point coordinates of the Block after applying <br>
//! the TransformationMatrix <br>
  Standard_EXPORT     gp_Pnt TransformedCorner() const;
  //! returns the direction defining the local X-axis <br>
  Standard_EXPORT     gp_Dir XAxis() const;
  //! returns the direction defining the local X-axis after applying <br>
//! TransformationMatrix <br>
  Standard_EXPORT     gp_Dir TransformedXAxis() const;
  //! returns the direction defining the local Y-axis <br>
//! it is the cross product of ZAxis and XAxis <br>
  Standard_EXPORT     gp_Dir YAxis() const;
  //! returns the direction defining the local Y-axis after applying <br>
//! TransformationMatrix <br>
  Standard_EXPORT     gp_Dir TransformedYAxis() const;
  //! returns the direction defining the local X-axis <br>
  Standard_EXPORT     gp_Dir ZAxis() const;
  //! returns the direction defining the local Z-axis after applying <br>
//! TransformationMatrix <br>
  Standard_EXPORT     gp_Dir TransformedZAxis() const;




  DEFINE_STANDARD_RTTI(IGESSolid_Block)

protected:




private: 


gp_XYZ theSize;
gp_XYZ theCorner;
gp_XYZ theXAxis;
gp_XYZ theZAxis;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
