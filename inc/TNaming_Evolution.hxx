// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_Evolution_HeaderFile
#define _TNaming_Evolution_HeaderFile

//! Defines the type of evolution in old shape - new shape pairs. <br>
//! The definitions - in the form of the terms of <br>
//! the enumeration - are needed by the <br>
//! TNaming_NamedShape attribute and <br>
//! indicate what entities this attribute records as follows: <br>
//! -   PRIMITIVE <br>
//!   -   New entities; in each pair, old shape is a <br>
//!    null shape and new shape is a created <br>
//!    entity. <br>
//! -   GENERATED <br>
//!   -   Entities created from other entities; in <br>
//!    each pair, old shape is the generator and <br>
//!    new shape is the created entity. <br>
//! -   MODIFY <br>
//!   -   Split or merged entities, in each pair, old <br>
//!    shape is the entity before the operation <br>
//!    and new shape is the new entity after the <br>
//!    operation. <br>
//! -   DELETE <br>
//!   -   Deletion of entities; in each pair, old <br>
//!    shape is a deleted entity and new shape is null. <br>
//! -   SELECTED <br>
//!   -   Named topological entities; in each pair, <br>
//!    the new shape is a named entity and the <br>
//!    old shape is not used. <br>
//! <br>
//! For a split which generates multiple faces, the <br>
//! attribute will contain many pairs with the same <br>
//! old shape; for a merge, it will contain many <br>
//! pairs with the same new shape. <br>
//! Finally, an example of delete would be a face <br>
//! removed by a Boolean operation. <br>
enum TNaming_Evolution {
TNaming_PRIMITIVE,
TNaming_GENERATED,
TNaming_MODIFY,
TNaming_DELETE,
TNaming_REPLACE,
TNaming_SELECTED
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
