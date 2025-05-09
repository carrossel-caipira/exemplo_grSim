#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "shared_proto::shared_proto_msgs" for configuration ""
set_property(TARGET shared_proto::shared_proto_msgs APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(shared_proto::shared_proto_msgs PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libshared_proto_msgs.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS shared_proto::shared_proto_msgs )
list(APPEND _IMPORT_CHECK_FILES_FOR_shared_proto::shared_proto_msgs "${_IMPORT_PREFIX}/lib/libshared_proto_msgs.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
