# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/office/src/cpp/Qt_cmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/office/src/cpp/Qt_cmake/build

# Utility rule file for Qt_cmake_autogen.

# Include the progress variables for this target.
include CMakeFiles/Qt_cmake_autogen.dir/progress.make

CMakeFiles/Qt_cmake_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/office/src/cpp/Qt_cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Qt_cmake"
	/usr/bin/cmake -E cmake_autogen /home/office/src/cpp/Qt_cmake/build/CMakeFiles/Qt_cmake_autogen.dir/AutogenInfo.json Debug

Qt_cmake_autogen: CMakeFiles/Qt_cmake_autogen
Qt_cmake_autogen: CMakeFiles/Qt_cmake_autogen.dir/build.make

.PHONY : Qt_cmake_autogen

# Rule to build all files generated by this target.
CMakeFiles/Qt_cmake_autogen.dir/build: Qt_cmake_autogen

.PHONY : CMakeFiles/Qt_cmake_autogen.dir/build

CMakeFiles/Qt_cmake_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Qt_cmake_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Qt_cmake_autogen.dir/clean

CMakeFiles/Qt_cmake_autogen.dir/depend:
	cd /home/office/src/cpp/Qt_cmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/office/src/cpp/Qt_cmake /home/office/src/cpp/Qt_cmake /home/office/src/cpp/Qt_cmake/build /home/office/src/cpp/Qt_cmake/build /home/office/src/cpp/Qt_cmake/build/CMakeFiles/Qt_cmake_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Qt_cmake_autogen.dir/depend

