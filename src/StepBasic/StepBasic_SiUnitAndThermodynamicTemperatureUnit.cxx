// Copyright (c) 1999-2012 OPEN CASCADE SAS
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

#include <StepBasic_SiUnitAndThermodynamicTemperatureUnit.ixx>
#include <StepBasic_SiUnit.hxx>
#include <StepBasic_ThermodynamicTemperatureUnit.hxx>


//=======================================================================
//function : StepBasic_SiUnitAndThermodynamicTemperatureUnit
//purpose  : 
//=======================================================================

StepBasic_SiUnitAndThermodynamicTemperatureUnit::StepBasic_SiUnitAndThermodynamicTemperatureUnit ()
{
}


//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_SiUnitAndThermodynamicTemperatureUnit::Init(const Handle(StepBasic_DimensionalExponents)& aDimensions)
{
  StepBasic_NamedUnit::Init(aDimensions);
}


//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepBasic_SiUnitAndThermodynamicTemperatureUnit::Init(const Standard_Boolean hasAprefix,
                                                           const StepBasic_SiPrefix aPrefix,
                                                           const StepBasic_SiUnitName aName)
{
  // --- class inherited fields ---
  // --- ANDOR componant fields ---
  StepBasic_SiUnit::Init(hasAprefix, aPrefix, aName);
    
  // --- ANDOR componant fields ---
  thermodynamicTemperatureUnit = new StepBasic_ThermodynamicTemperatureUnit();
  Handle(StepBasic_DimensionalExponents) aDimensions;
  aDimensions.Nullify();
  thermodynamicTemperatureUnit->Init(aDimensions);
}


//=======================================================================
//function : SetThermodynamicTemperatureUnit
//purpose  : 
//=======================================================================

void StepBasic_SiUnitAndThermodynamicTemperatureUnit::SetThermodynamicTemperatureUnit
  (const Handle(StepBasic_ThermodynamicTemperatureUnit)& aThermodynamicTemperatureUnit)
{
  thermodynamicTemperatureUnit = aThermodynamicTemperatureUnit;
}


//=======================================================================
//function : SolidAngleUnit
//purpose  : 
//=======================================================================

Handle(StepBasic_ThermodynamicTemperatureUnit) StepBasic_SiUnitAndThermodynamicTemperatureUnit::ThermodynamicTemperatureUnit() const
{
  return thermodynamicTemperatureUnit;
}

