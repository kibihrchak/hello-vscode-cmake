cmake_minimum_required(VERSION 3.10)

project(HelloRaspbianCrossPiGcc)

# add the executable
add_executable(HelloRaspbianCrossPiGcc ../src/main.c)

get_filename_component(
    tools
    ../toolchains/cross-pi-gcc
    ABSOLUTE)
set(CMAKE_C_COMPILER ${tools}/opt/cross-pi-gcc/bin/arm-linux-gnueabihf-gcc)
set(CMAKE_CXX_COMPILER ${tools}/opt/cross-pi-gcc/bin/arm-linux-gnueabihf-g++)
set(CMAKE_SYSROOT ${tools})

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
