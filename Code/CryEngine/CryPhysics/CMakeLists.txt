#START-FILE-LIST
# File List auto generated by waf2cmake.py, do not modify manually.

start_sources()
# -- cryphysics.waf_files --
sources_platform(ALL)
add_sources("NoUberFile"
	PROJECTS CryPhysics CryPhysicsRC
	SOURCE_GROUP "Collisions"
		"tetrlattice.cpp"
		"trimesh.cpp"
		"voxelbv.cpp"
		"voxelgeom.cpp"
		"aabbtree.cpp"
		"boxgeom.cpp"
		"capsulegeom.cpp"
		"spheregeom.h"
		"tetrlattice.h"
		"trimesh.h"
		"voxelbv.h"
		"voxelgeom.h"
		"aabbtree.h"
		"aabbtree_info.h"
		"boxgeom.h"
		"bvtree.h"
		"capsulegeom.h"
		"cylindergeom.cpp"
		"geoman.cpp"
		"geometry.cpp"
		"obbtree.cpp"
		"overlapchecks.cpp"
		"raybv.cpp"
		"raygeom.cpp"
		"rwi.cpp"
		"rotunprojectionchecks.cpp"
		"cylindergeom.h"
		"geoman.h"
		"geoman_info.h"
		"geometries.h"
		"geometry.h"
		"obbtree.h"
		"obbtree_info.h"
		"overlapchecks.h"
		"raybv.h"
		"raygeom.h"
		"singleboxtree.cpp"
		"spheregeom.cpp"
		"heightfieldbv.cpp"
		"heightfieldgeom.cpp"
		"intersectionchecks.cpp"
		"linunprojectionchecks.cpp"
		"singleboxtree.h"
		"spheregeom.h"
		"heightfieldbv.h"
		"heightfieldgeom.h"
		"intersectionchecks.h"
		"unprojectionchecks.h"
	SOURCE_GROUP "Dynamics"
		"waterman.cpp"
		"wheeledvehicleentity.cpp"
		"articulatedentity.cpp"
		"livingentity.cpp"
		"waterman.h"
		"wheeledvehicleentity.h"
		"articulatedentity.h"
		"livingentity.h"
		"rigidbody.cpp"
		"rigidbody.h"
		"physicalworld.cpp"
		"rigidentity.cpp"
		"ropeentity.cpp"
		"softentity.cpp"
		"particleentity.cpp"
		"physicalworld.h"
		"rigidentity.h"
		"ropeentity.h"
		"softentity.h"
		"particleentity.h"
		"physicalentity.cpp"
		"physicalentity.h"
		"physarea.cpp"
		"physicalplaceholder.h"
		"physicalplaceholder.cpp"
	SOURCE_GROUP "Root"
		"CryPhysics.cpp"
		"resource.h"
		"StdAfx.cpp"
		"StdAfx.h"
	SOURCE_GROUP "Utils"
		"boolean2d.cpp"
		"boolean3d.cpp"
		"matrixnm.cpp"
		"qhull.cpp"
		"utils.cpp"
		"worldump.cpp"
		"matrixnm.h"
		"quotient.h"
		"utils.h"
		"vectorn.h"
)

end_sources()
#END-FILE-LIST

if(NOT RESOURCE_COMPILER)
	if (PHYSICS_CRYPHYSICS)
		CryEngineModule(CryPhysics SOLUTION_FOLDER "CryEngine")
		if(ORBIS OR LINUX OR ANDROID)
			target_compile_options(${THIS_PROJECT} PRIVATE
				-Wno-constant-conversion
				-Wno-null-dereference
				-Wno-array-bounds
				-Wno-shift-negative-value
			)
		endif()
	else()
		CryFileContainer(CryPhysics SOLUTION_FOLDER "CryEngine")
	endif()
else()
	CryResourceCompilerModule(CryPhysicsRC PCH "StdAfx.cpp" SOLUTION_FOLDER "RC")
endif()
