SET(TOOLKIT TKXMesh)

SET(TOOLKIT_MODULES
	XBRepMesh
)
SET(TOOLKIT_DEPENDS
	TKBRep
	TKMath
	TKernel
	TKG2d
	TKMesh
)

INCLUDE(../BuildToolkit.cmake)

