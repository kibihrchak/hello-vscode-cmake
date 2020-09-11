cmake_minimum_required(VERSION 3.0.0)
project(HelloClangTidy VERSION 0.1.0)

include(CTest)
enable_testing()

#   Use `.clang-tidy` config file
set(CMAKE_CXX_CLANG_TIDY
    clang-tidy;
    -config=;
)

add_executable(HelloClangTidy main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
