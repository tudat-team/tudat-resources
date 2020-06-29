#    Copyright (c) 2010-2019, Delft University of Technology
#    All rigths reserved
#
#    This file is part of the Tudat. Redistribution and use in source and
#    binary forms, with or without modification, are permitted exclusively
#    under the terms of the Modified BSD license. You should have received
#    a copy of the license with this file. If not, please or visit:
#    http://tudat.tudelft.nl/LICENSE.

# Specify minimum cmake version required to compile Tudat.
cmake_minimum_required(VERSION 3.3)

# Trick for recompiling changes for BUILD-TREE.
if (EXISTS "${CMAKE_BINARY_DIR}/CMakeCache.txt")
    file(REMOVE "${CMAKE_BINARY_DIR}/CMakeCache.txt")
endif ()

# Set cmake policy.
cmake_policy(SET CMP0069 NEW)

# Specific project name.
project(TudatResourcesTest VERSION 1.0.0 LANGUAGES C CXX)

find_package(TudatResources REQUIRED)

# Add test
enable_testing()
add_executable(test_binary test_binary.cpp)

message(${TudatResources_INCLUDE_DIRS})
include_directories(${TudatResources_INCLUDE_DIRS})
add_test(test_binary tests/test_binary)

set_target_properties(test_binary
        PROPERTIES
        LINKER_LANGUAGE CXX
        ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/tests"
        )

target_include_directories(test_binary PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include>
        $<INSTALL_INTERFACE:include>)


