######################################################################
# @author      : Daniele Guffanti (daniele.guffanti@mib.infn.it)
# @file        : CMakeLists
# @created     : lunedì apr 11, 2022 16:14:53 CEST
######################################################################

cmake_minimum_required(VERSION 3.2)

project(WDBinaryParser)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)


#-----------------------------------------------------------------
# Define few project's paths
set(WDBinary_SOURCE_DIR "${PROJECT_SOURCE_DIR}/src")
set(WDBinary_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/inc")
set(WDBinary_LIB_DIR "${PROJECT_SOURCE_DIR}/lib")
set(WDBinary_OBJ_DIR "${PROJECT_SOURCE_DIR}/obj")
set(WDBinary_INSTALL_CMAKE_DIR "${WDBinary_LIB_DIR}/cmake/${PROJECT_NAME}")

#------------------------------------------------------------------
# Setup ROOT path and includes
list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS})
find_package(ROOT REQUIRED COMPONENTS RIO) 
include(${ROOT_USE_FILE})

add_subdirectory(${PROJECT_SOURCE_DIR}/src)

# Add libraries targets to the build-tree export set
export(TARGETS caenparse
  FILE "${PROJECT_BINARY_DIR}/WDBinaryParserTargets.cmake")

export(PACKAGE WDBinary)


include(CMakePackageConfigHelpers)
configure_package_config_file(
  cmake/WDBinaryParserConfig.cmake.in
  cmake/WDBinaryParserConfig.cmake
  INSTALL_DESTINATION "${WDBinary_INSTALL_CMAKE_DIR}"
  PATH_VARS WDBinary_LIB_DIR  WDBinary_INCLUDE_DIR WDBinary_INSTALL_CMAKE_DIR
  )

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/cmake/WDBinaryParserConfig.cmake 
  DESTINATION ${WDBinary_INSTALL_CMAKE_DIR})

export(EXPORT WDBinaryParserTargets
  FILE "${WDBinary_INSTALL_CMAKE_DIR}/WDBinaryParserTargets.cmake"
  NAMESPACE WDBinary::
)



