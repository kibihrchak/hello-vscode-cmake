# Hello, VSCode CMake!

This is a collection of VSCode project aiming at testing and exploring
VSCode and CMake integration, as well as the integration with other
supplemental C/C++ development tools, most notably Clang tool suite.

# Projects

Here's a short local project overview list:

|Project                    |Description
|---------------------------|-------------------------------------------
|`hello-cmake`              |Simple "Hello, world!" program
|`hello-clang-format`       |Simple `clang-format` setup and use
|`hello-clang-tidy`         |Simple `clang-tidy` setup and use
|`hello-subprojects`        |Check handling of CMake subdirectories
|`cmake-tutorial-project`   |External CMake project from CMake tutorial

Aside from those, there are imported projects from other repos. They are
kept as Git submodules in the `/external` directory, and active projects
are correspondingly named in the VSCode multi-root workspace. Repos are:

|Project                        |Description
|-------------------------------|---------------------------------------
|[TTroy's examples][ext_ttroy50]|Check out its readme for more info

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

-

[ext_ttroy50]: <https://github.com/ttroy50/cmake-examples>
