cmake_minimum_required(VERSION 3.20)

project (Azslc)

include(FetchContent)

FetchContent_Declare(
  cli11
  GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git
  GIT_TAG 3ce61a169297f5fe7d4b08bdbfa82290950d6f7f
)

# Antlr4 external dependency
FetchContent_Declare(
  antlr4
  GIT_REPOSITORY https://github.com/o3de/antlr4.git
  GIT_TAG o3de-4.9.3
  SOURCE_SUBDIR runtime/Cpp
  CMAKE_ARGS "-DCMAKE_BUILD_TYPE=Release"
  GIT_SHALLOW TRUE
  GIT_PROGRESS TRUE
)

FetchContent_MakeAvailable(cli11 antlr4)

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
  "${PROJECT_SOURCE_DIR}/external/jsoncpp/dist/json/*.h"
  "${PROJECT_SOURCE_DIR}/external/jsoncpp/dist/*.cpp"
  "${PROJECT_SOURCE_DIR}/external/mpark-variant/master/*.hpp"
  "${PROJECT_SOURCE_DIR}/external/tiny/*.h"
)

file(GLOB azslc_GeneratedSrc
  "${PROJECT_SOURCE_DIR}/generated/*.cpp"
)

set( ANTLR4CPP_INCLUDE_DIRS
  ${antlr4_SOURCE_DIR}/runtime/Cpp/runtime/src
  ${antlr4_SOURCE_DIR}/runtime/Cpp/runtime/src/dfa
  ${antlr4_SOURCE_DIR}/runtime/Cpp/runtime/src/misc
  ${antlr4_SOURCE_DIR}/runtime/Cpp/runtime/src/tree
)

set( MPARK_VARIANT_INCLUDE_DIRS
  ${PROJECT_SOURCE_DIR}/external/mpark-variant/master
)

set( TINY_OPTIONAL_INCLUDE_DIRS
  ${PROJECT_SOURCE_DIR}/external/tiny
)

add_executable(azslc ${azslc_LocalSRC} ${azslc_PlatformSRC} ${azslc_GeneratedSrc} ${azslc_ExternalSRC})

target_compile_features(azslc PRIVATE cxx_std_17)

target_include_directories(
  azslc
  PRIVATE
  ${PROJECT_SOURCE_DIR}
  ${PROJECT_SOURCE_DIR}/external
  ${PROJECT_SOURCE_DIR}/../Platform/Common/src
  ${ANTLR4CPP_INCLUDE_DIRS}
  ${MPARK_VARIANT_INCLUDE_DIRS}
  ${TINY_OPTIONAL_INCLUDE_DIRS}
)

source_group("azslc" FILES ${azslc_LocalSRC})
source_group("generated" FILES ${azslc_GeneratedSrc})
source_group("external" FILES ${azslc_ExternalSRC})
source_group("platforms" FILES ${azslc_PlatformSRC})

if (MSVC)
  set_property(TARGET azslc PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
  target_compile_options(azslc
    PRIVATE
    "/MP" # Build with multiple processes
    "/permissive-"
    "/Zc:__cplusplus"
    "/utf-8")
  target_compile_definitions(azslc
    PRIVATE
    _CRT_SECURE_NO_WARNINGS
    _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
    ANTLR4CPP_STATIC)
elseif (UNIX AND NOT APPLE)
  target_link_libraries(azslc PRIVATE stdc++fs)
endif()

target_link_libraries(azslc PRIVATE CLI11::CLI11 antlr4_static)

if (MSVC)
  add_custom_command(TARGET azslc POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E make_directory "${PROJECT_SOURCE_DIR}/../bin/${buildPlatform}/$(Configuration)"
      COMMAND ${CMAKE_COMMAND} -E copy "${CMAKE_BINARY_DIR}/$(Configuration)/azslc.exe" "${PROJECT_SOURCE_DIR}/../bin/${buildPlatform}/$(Configuration)"
)
endif()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set_target_properties( azslc
    PROPERTIES
    EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/"
    LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}/"
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT azslc)
