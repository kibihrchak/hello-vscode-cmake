# Test CMake Conan Wrapper Integration

## Overview

[CMake Conan][cmake-conan] wrapper allows launching Conan from CMake.
This project tests inclusion and use of [C++ fmt library][fmtlib].

## IntelliSense

IntelliSense (package includes resolution) don't work if package is
introduced as a CMake target, eg:

```cmake
include(conan.cmake)
conan_cmake_run(REQUIRES fmt/1.9.4
                BASIC_SETUP CMAKE_TARGETS
                BUILD missing)

add_executable(main main.cpp)
target_link_libraries(main CONAN_PKG::fmt)
```

[cmake-conan]: <https://github.com/conan-io/cmake-conan>
[fmtlib]: <https://github.com/fmtlib/fmt>
