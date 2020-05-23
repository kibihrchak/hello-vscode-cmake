cmake_minimum_required(VERSION 3.10)

project(HelloRaspbianRaspberryPi)

# add the executable
add_executable(HelloRaspbianRaspberryPi ../src/main.c)

get_filename_component(
    tools
    ../toolchains/raspberrypi/tools/arm-bcm2708/arm-rpi-4.9.3-linux-gnueabihf
    ABSOLUTE)
set(CMAKE_C_COMPILER ${tools}/bin/arm-linux-gnueabihf-gcc)
set(CMAKE_CXX_COMPILER ${tools}/bin/arm-linux-gnueabihf-g++)
set(CMAKE_SYSROOT ${tools}/arm-linux-gnueabihf/sysroot)

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
