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

# Set cmake policy.
cmake_policy(SET CMP0069 NEW)

# Get version from file.
file(READ "version" tudat_data_VERSION_LABEL)
string(REGEX MATCH "^([0-9]+)\\.([0-9]+)\\.([0-9]+)" tudat_data_VERSION "${tudat_data_VERSION_LABEL}")

# Specific project name.
project(TudatResources VERSION ${TudatResources_VERSION} LANGUAGES C CXX)

# Get lower string name of PROJECT_NAME for directory configuration.
string(TOLOWER ${PROJECT_NAME} PROJECT_NAME_LOWER)
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)
set(CMAKE_POSITION_INDEPENDENT_CODE True)

# +============================================================================
# INSTALL TREE CONFIGURATION (Project name independent)
#  Offer the user the choice of overriding the installation directories.
# +============================================================================
set(INSTALL_INCLUDE_DIR "${CMAKE_INSTALL_PREFIX}/include/" CACHE PATH "Installation directory for header files")

# CONFIGURE
configure_file(
        "${PROJECT_SOURCE_DIR}/config.hpp.in"
        "${PROJECT_BINARY_DIR}/include/tudat/resource/config.hpp" @ONLY
        )

install(FILES
        "${PROJECT_BINARY_DIR}/include/tudat/resource/config.hpp"
        DESTINATION ${INSTALL_INCLUDE_DIR}/tudat/resource)


