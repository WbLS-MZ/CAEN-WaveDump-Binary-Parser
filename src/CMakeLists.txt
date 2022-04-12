######################################################################
# @author      : Daniele Guffanti (daniele.guffanti@mib.infn.it)
# @file        : CMakeLists
# @created     : lunedì apr 11, 2022 16:29:46 CEST
######################################################################

set(CAEN_OBJ_LIST "CaenAnalyzer" "CaenBoard" "CaenEvent" "CaenParser")
set(OBJ_LIBS "")

add_compile_options(-Wall -Wextra -fPIC)
include_directories(${WDBinary_INCLUDE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

foreach(obj IN LISTS CAEN_OBJ_LIST) 
  add_library(${obj} OBJECT ${obj}.cpp)
  list(APPEND OBJ_LIBS "$<TARGET_OBJECTS:${obj}>")
endforeach()

add_library(caenparse SHARED ${OBJ_LIBS})

install(TARGETS caenparse
  EXPORT  WDBinaryParserTargets
  LIBRARY DESTINATION "${WDBinary_LIB_DIR}")



