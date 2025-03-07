# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget SUMO::libsumocpp SUMO::libtracicpp)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target SUMO::libsumocpp
add_library(SUMO::libsumocpp SHARED IMPORTED)

set_target_properties(SUMO::libsumocpp PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "HAVE_LIBSUMOGUI"
  INTERFACE_INCLUDE_DIRECTORIES "/home/aniket/Documents/workspace/msvanet/sumo/src"
)

# Create imported target SUMO::libtracicpp
add_library(SUMO::libtracicpp SHARED IMPORTED)

set_target_properties(SUMO::libtracicpp PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "/home/aniket/Documents/workspace/msvanet/sumo/src"
)

# Import target "SUMO::libsumocpp" for configuration "Release"
set_property(TARGET SUMO::libsumocpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SUMO::libsumocpp PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/aniket/Documents/workspace/msvanet/sumo/bin/libsumocpp.so"
  IMPORTED_SONAME_RELEASE "libsumocpp.so"
  )

# Import target "SUMO::libtracicpp" for configuration "Release"
set_property(TARGET SUMO::libtracicpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SUMO::libtracicpp PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/aniket/Documents/workspace/msvanet/sumo/bin/libtracicpp.so"
  IMPORTED_SONAME_RELEASE "libtracicpp.so"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
