cmake_minimum_required(VERSION 3.10)

project (HelloConan)

# Download automatically, you can also just copy the conan.cmake file
# if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
#    message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
#    file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/master/conan.cmake"
#                   "${CMAKE_BINARY_DIR}/conan.cmake")
# endif()

# include(${CMAKE_BINARY_DIR}/conan.cmake)
include(conan.cmake)

conan_cmake_run(
    REQUIRES fmt/6.1.2
    BASIC_SETUP
    BUILD missing)

# Add an executable
add_executable(HelloConan main.cpp)

# link against the fmt target supplied by conan
target_link_libraries(HelloConan
    PRIVATE ${CONAN_LIBS}
)
