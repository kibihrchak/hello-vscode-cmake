# Hello, VSCode CMake!

This is a collection of VSCode project aiming at testing and exploring
VSCode and CMake integration, as well as the integration with other
supplemental C/C++ development tools, most notably Clang tool suite.

# Projects

Here's a short local project overview list. Click project name to go to
the corresponding readme with setup stuff.

|Project                    |Description
|---------------------------|-------------------------------------------
|hello-cmake                |Simple "Hello, world!" program
|hello-clang-format         |Simple `clang-format` setup and use
|hello-clang-tidy           |Simple `clang-tidy` setup and use
|hello-subprojects          |Check handling of CMake subdirectories
|cmake-tutorial-project     |External CMake project from CMake tutorial
|[hello-rpi-cross-compile]  |Test cross-compilation for Raspberry Pi
|[hello-conan]              |Test CMake integration for CMake Conan 

Aside from those, there are imported projects from other repos. They are
kept as Git submodules in the `/external` directory, and active projects
are correspondingly named in the VSCode multi-root workspace.

|Project                        |Note
|-------------------------------|---------------------------------------
|ttroy50/cmake-examples         |Check repo doc [ttroy50_github]

# Environment Setup

Needed Ubuntu packages are:

*   `cmake`
*   `clang-format`
*   `clang-tidy`

External tools may have their own set of environment prerequisites.
Check their corresponding readmes for more info.

VSCode extensions are stated in [the VSCode workspace
file](hello-vscode-cmake.code-workspace), as recommended extensions.

# Resources

*   [Microsoft CMake extension documentation][ms_cmake_ext_doc]

[ms_cmake_ext_doc]: <https://vector-of-bool.github.io/docs/vscode-cmake-tools/index.html>

[hello-rpi-cross-compile]: <hello-rpi-cross-compile/readme.md>
[hello-conan]: <hello-conan/readme.md>
[ttroy50_github]: <https://github.com/ttroy50/cmake-examples/README.adoc>
