cmake_minimum_required(VERSION 3.7)

project (Azslc)

SET (CMAKE_CXX_STANDARD 17)

if (MSVC)
  add_compile_options("/std:c++17")
  add_compile_options("/permissive-")
  add_compile_options("/Zc:__cplusplus")
  add_compile_options("/utf-8")
  add_compile_options("/MP")
else()
  add_compile_options("--std=c++17")
endif()

  set(CompilerFlags
        CMAKE_CXX_FLAGS
        CMAKE_CXX_FLAGS_DEBUG
        CMAKE_CXX_FLAGS_RELEASE
        CMAKE_C_FLAGS
        CMAKE_C_FLAGS_DEBUG
        CMAKE_C_FLAGS_RELEASE
        )

if (MSVC)
  foreach(CompilerFlag ${CompilerFlags})
    string(REPLACE "/MT" "/MD" ${CompilerFlag} "${${CompilerFlag}}")
  endforeach()
else()
  set (CMAKE_CXX_FLAGS "-Wno-logical-op-parentheses")
endif()

if (MSVC)
  add_definitions(-D_CRT_SECURE_NO_WARNINGS)
  add_definitions(-D_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING)
endif()

# get all chars that are not separators before the end
string(REGEX MATCH "[^/\\]*$" buildPlatform ${CMAKE_BINARY_DIR})

file(GLOB_RECURSE  azslc_PlatformSRC
  "${PROJECT_SOURCE_DIR}/../Platform/*.cpp"
  "${PROJECT_SOURCE_DIR}/../Platform/*.h"
)

file(GLOB azslc_LocalSRC
  "${PROJECT_SOURCE_DIR}/*.cpp"
  "${PROJECT_SOURCE_DIR}/*.tpl"
  "${PROJECT_SOURCE_DIR}/*.h"
)

file(GLOB azslc_ExternalSRC
  "${PROJECT_SOURCE_DIR}/external/docopt/*.cpp"
  "${PROJECT_SOURCE_DIR}/external/jsoncpp/dist/json/*.h"
  "${PROJECT_SOURCE_DIR}/external/jsoncpp/dist/*.cpp"
  "${PROJECT_SOURCE_DIR}/external/mpark-variant/master/*.hpp"
  "${PROJECT_SOURCE_DIR}/external/tiny/*.h"
)

file(GLOB azslc_GeneratedSrc
  "${PROJECT_SOURCE_DIR}/generated/*.cpp"
)

if (MSVC)
  include_external_msproject(antlr4_static ${CMAKE_BINARY_DIR}/external/antlr4/runtime/Cpp/runtime/antlr4_static.vcxproj)
endif()

set( ANTLR4CPP_INCLUDE_DIRS
  ${PROJECT_SOURCE_DIR}/external/antlr4/runtime/Cpp/runtime/src
  ${PROJECT_SOURCE_DIR}/external/antlr4/runtime/Cpp/runtime/src/dfa
  ${PROJECT_SOURCE_DIR}/external/antlr4/runtime/Cpp/runtime/src/misc
  ${PROJECT_SOURCE_DIR}/external/antlr4/runtime/Cpp/runtime/src/tree
)
# add antrl4cpp artifacts to project environment

set( MPARK_VARIANT_INCLUDE_DIRS
  ${PROJECT_SOURCE_DIR}/external/mpark-variant/master
)

set( TINY_OPTIONAL_INCLUDE_DIRS
  ${PROJECT_SOURCE_DIR}/external/tiny
)

include_directories(
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/external
    ${ANTLR4CPP_INCLUDE_DIRS}
    ${MPARK_VARIANT_INCLUDE_DIRS}
    ${TINY_OPTIONAL_INCLUDE_DIRS}
)

if (MSVC)
  link_directories(
    ${CMAKE_BINARY_DIR}/external/antlr4/runtime/Cpp/dist/${CMAKE_BUILD_TYPE}
  )
elseif (UNIX)
  link_directories(
    ${CMAKE_BINARY_DIR}/external/antlr4/runtime/Cpp/dist/
  )
endif()

if (MSVC)
    # For Windows builds we need to replace the std::regex with boost::regex for as long as we use docopt
    set( BOOST_PATH              ${PROJECT_SOURCE_DIR}/external/boost)
    set( BOOST_INCLUDE_DIRS      ${BOOST_PATH} )
    set( BOOST_LINK_DIRS         ${BOOST_PATH}/stage/lib )
  
  add_definitions(-DDOCTOPT_USE_BOOST_REGEX)

  include_directories( ${BOOST_INCLUDE_DIRS} )

  link_directories( ${BOOST_LINK_DIRS} )
endif()

add_executable(azslc ${azslc_LocalSRC} ${azslc_PlatformSRC} ${azslc_GeneratedSrc} ${azslc_ExternalSRC})

source_group("azslc" FILES ${azslc_LocalSRC})
source_group("generated" FILES ${azslc_GeneratedSrc})
source_group("external" FILES ${azslc_ExternalSRC})
source_group("platforms" FILES ${azslc_PlatformSRC})

if (MSVC)
  target_link_libraries(azslc antlr4-runtime-static)
elseif (UNIX AND NOT APPLE)
  target_link_libraries(azslc libantlr4-runtime.a stdc++fs)
elseif (UNIX)
  target_link_libraries(azslc libantlr4-runtime.a)
endif()

if (MSVC)
  SET(boostRegexReleaseLib boost_regex-vc142-mt-x64-1_70)
  SET(boostRegexDebugLib boost_regex-vc142-mt-gd-x64-1_70)
  SET(LINK_REGEX_LIBRARY optimized ${boostRegexReleaseLib} debug ${boostRegexDebugLib})
  target_link_libraries(azslc ${LINK_REGEX_LIBRARY})
  add_dependencies(azslc antlr4_static)

  add_custom_command(TARGET azslc POST_BUILD
      COMMAND if $(Configuration) == "Debug" (COMMAND ${CMAKE_COMMAND} -E copy ${BOOST_LINK_DIRS}/${boostRegexDebugLib}.dll ${CMAKE_BINARY_DIR}/$(Configuration)/)
      COMMAND if NOT $(Configuration) == "Debug" (COMMAND ${CMAKE_COMMAND} -E copy ${BOOST_LINK_DIRS}/${boostRegexReleaseLib}.dll ${CMAKE_BINARY_DIR}/$(Configuration)/)
      COMMAND ${CMAKE_COMMAND} -E make_directory "${PROJECT_SOURCE_DIR}/../bin/${buildPlatform}/$(Configuration)"
      COMMAND ${CMAKE_COMMAND} -E copy "${CMAKE_BINARY_DIR}/$(Configuration)/azslc.exe" "${PROJECT_SOURCE_DIR}/../bin/${buildPlatform}/$(Configuration)"
      COMMAND if $(Configuration) == "Debug" (COMMAND ${CMAKE_COMMAND} -E copy ${BOOST_LINK_DIRS}/${boostRegexDebugLib}.dll "${PROJECT_SOURCE_DIR}/../bin/${buildPlatform}/$(Configuration)")
      COMMAND if NOT $(Configuration) == "Debug" (COMMAND ${CMAKE_COMMAND} -E copy ${BOOST_LINK_DIRS}/${boostRegexReleaseLib}.dll "${PROJECT_SOURCE_DIR}/../bin/${buildPlatform}/$(Configuration)")
)
endif()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set_target_properties( azslc
    PROPERTIES
    EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/"
    LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}/"
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT azslc)
