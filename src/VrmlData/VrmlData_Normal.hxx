// Created on: 2006-05-26
// Created by: Alexander GRIGORIEV
// Copyright (c) 2006-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.



#ifndef VrmlData_Normal_HeaderFile
#define VrmlData_Normal_HeaderFile

#include <VrmlData_ArrayVec3d.hxx>

/**
 *  Implementation of the node Normal
 */
class VrmlData_Normal : public VrmlData_ArrayVec3d
{
 public:
  // ---------- PUBLIC METHODS ----------

  /**
   * Empty constructor
   */
  inline VrmlData_Normal () {}

  /**
   * Constructor
   */
  inline VrmlData_Normal (const VrmlData_Scene& theScene,
                          const char            * theName,
                          const size_t          nVec     = 0,
                          const gp_XYZ          * arrVec = 0L)
    : VrmlData_ArrayVec3d (theScene, theName, nVec, arrVec)
  {}

  /**
   * Query one normal
   * @param i
   *   index in the array of normals [0 .. N-1]
   * @return
   *   the normal value for the index. If index irrelevant, returns (0., 0., 0.)
   */
  inline const gp_XYZ& Normal   (const Standard_Integer i) const
  { return Value(i); }

  /**
   * Create a copy of this node.
   * If the parameter is null, a new copied node is created. Otherwise new node
   * is not created, but rather the given one is modified.
   */
  Standard_EXPORT virtual Handle(VrmlData_Node)
                        Clone   (const Handle(VrmlData_Node)& theOther)const;

  /**
   * Read the Node from input stream.
   */
  Standard_EXPORT virtual VrmlData_ErrorStatus
                        Read    (VrmlData_InBuffer& theBuffer);

  /**
   * Write the Node to the Scene output.
   */
  Standard_EXPORT virtual VrmlData_ErrorStatus
                        Write   (const char * thePrefix) const;


 private:
  // ---------- PRIVATE FIELDS ----------


 public:
// Declaration of CASCADE RTTI
DEFINE_STANDARD_RTTI (VrmlData_Normal)
};

// Definition of HANDLE object using Standard_DefineHandle.hxx
DEFINE_STANDARD_HANDLE (VrmlData_Normal, VrmlData_ArrayVec3d)


#endif
