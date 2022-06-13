cmake_minimum_required(VERSION 3.0)

# THIS HAS TO COME BEFORE THE PROJECT LINE
set(CMAKE_C_COMPILER "gcc-11")
set(CMAKE_CXX_COMPILER "g++-11")
# THIS HAS TO COME BEFORE THE PROJECT LINE

project(vgaudio)

include(ExternalProject)

include(cmake/common_defines.cmake)

include(cmake/project_options.cmake)

include(cmake/project_directories.cmake)

include(project_targets.cmake)

include(cmake/project_prebuild.cmake)

include(cmake/ext_proj_zlib.cmake)

include(cmake/project_includes.cmake)
include(cmake/project_compile_options.cmake)

include(cmake/project_link.cmake)
include(cmake/project_link_options.cmake)

include(cmake/project_postbuild.cmake)
