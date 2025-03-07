#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "SUMO::libsumocpp" for configuration "Release"
set_property(TARGET SUMO::libsumocpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SUMO::libsumocpp PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsumocpp.so"
  IMPORTED_SONAME_RELEASE "libsumocpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS SUMO::libsumocpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_SUMO::libsumocpp "${_IMPORT_PREFIX}/lib/libsumocpp.so" )

# Import target "SUMO::libtracicpp" for configuration "Release"
set_property(TARGET SUMO::libtracicpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SUMO::libtracicpp PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libtracicpp.so"
  IMPORTED_SONAME_RELEASE "libtracicpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS SUMO::libtracicpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_SUMO::libtracicpp "${_IMPORT_PREFIX}/lib/libtracicpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
