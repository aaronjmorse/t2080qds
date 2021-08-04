# Copyright (c) 2020 Wind River Systems, Inc. All Rights Reserved.
#
cmake_minimum_required(VERSION 3.10.2)
project(t2080qds)
set(CMAKE_EXECUTABLE_SUFFIX ".out")
aux_source_directory("src" DIR_SRCS)
add_executable (t2080qds ${DIR_SRCS} )
