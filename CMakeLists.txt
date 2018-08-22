cmake_minimum_required(VERSION 2.8)

SET(DMPROJECT_NAME "dmgen_error")
PROJECT(${DMPROJECT_NAME})

IF (WIN32)  
    MESSAGE(STATUS "Now is windows")

    SET(DMOS_NAME "win")

    SET( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}" )    
ELSEIF (APPLE)  
    MESSAGE(STATUS "Now is Apple systems")  

    SET(DMOS_NAME "mac") 

    SET( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread" )
ELSEIF (UNIX)  
    MESSAGE(STATUS "Now is UNIX-like OS")  
 
    SET(DMOS_NAME "lin") 
    
    SET( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread" )    
ENDIF ()

ADD_DEFINITIONS(-DCTEMPLATE_DLL_DECL=)

IF (WIN32)
    INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/windows)
ENDIF(WIN32)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/ctemplate)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/include)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/src)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

LINK_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/lib/${DMOS_NAME})

SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/${DMOS_NAME})

FILE(GLOB SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/base/arena.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/htmlparser/htmlparser.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/htmlparser/jsparser.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/htmlparser/statemachine.cc

    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/diff_tpl_auto_escape.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/make_tpl_varnames_h.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/per_expand_data.cc

    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/template.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/template_annotator.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/template_cache.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/template_dictionary.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/template_modifiers.cc

    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/template_namelist.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/template_pathops.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/template_string.cc
)

IF (WIN32)
    LIST(APPEND SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/ctemplate/src/windows/port.cc)
ENDIF(WIN32)

ADD_LIBRARY(ctemplate ${SOURCES})

FILE(GLOB SOURCES
${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

ADD_EXECUTABLE(${DMPROJECT_NAME} ${SOURCES})
TARGET_LINK_LIBRARIES(${DMPROJECT_NAME} ctemplate)
