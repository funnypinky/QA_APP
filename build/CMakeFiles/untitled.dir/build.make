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

# Include any dependencies generated for this target.
include CMakeFiles/untitled.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled.dir/flags.make

untitled_autogen/EWIEGA46WW/qrc_qml.cpp: ../qml.qrc
untitled_autogen/EWIEGA46WW/qrc_qml.cpp: CMakeFiles/untitled_autogen.dir/AutoRcc_qml_EWIEGA46WW_Info.json
untitled_autogen/EWIEGA46WW/qrc_qml.cpp: ../main.qml
untitled_autogen/EWIEGA46WW/qrc_qml.cpp: /usr/lib64/qt5/bin/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/office/src/cpp/Qt_cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic RCC for qml.qrc"
	/usr/bin/cmake -E cmake_autorcc /home/office/src/cpp/Qt_cmake/build/CMakeFiles/untitled_autogen.dir/AutoRcc_qml_EWIEGA46WW_Info.json Debug

CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o: untitled_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/office/src/cpp/Qt_cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o -c /home/office/src/cpp/Qt_cmake/build/untitled_autogen/mocs_compilation.cpp

CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/office/src/cpp/Qt_cmake/build/untitled_autogen/mocs_compilation.cpp > CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.i

CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/office/src/cpp/Qt_cmake/build/untitled_autogen/mocs_compilation.cpp -o CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.s

CMakeFiles/untitled.dir/untitled_autogen/EWIEGA46WW/qrc_qml.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/untitled_autogen/EWIEGA46WW/qrc_qml.cpp.o: untitled_autogen/EWIEGA46WW/qrc_qml.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/office/src/cpp/Qt_cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/untitled.dir/untitled_autogen/EWIEGA46WW/qrc_qml.cpp.o"
	/usr/bin/clang++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled.dir/untitled_autogen/EWIEGA46WW/qrc_qml.cpp.o -c /home/office/src/cpp/Qt_cmake/build/untitled_autogen/EWIEGA46WW/qrc_qml.cpp

CMakeFiles/untitled.dir/untitled_autogen/EWIEGA46WW/qrc_qml.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled.dir/untitled_autogen/EWIEGA46WW/qrc_qml.cpp.i"
	/usr/bin/clang++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/office/src/cpp/Qt_cmake/build/untitled_autogen/EWIEGA46WW/qrc_qml.cpp > CMakeFiles/untitled.dir/untitled_autogen/EWIEGA46WW/qrc_qml.cpp.i

CMakeFiles/untitled.dir/untitled_autogen/EWIEGA46WW/qrc_qml.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/untitled_autogen/EWIEGA46WW/qrc_qml.cpp.s"
	/usr/bin/clang++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/office/src/cpp/Qt_cmake/build/untitled_autogen/EWIEGA46WW/qrc_qml.cpp -o CMakeFiles/untitled.dir/untitled_autogen/EWIEGA46WW/qrc_qml.cpp.s

# Object files for target untitled
untitled_OBJECTS = \
"CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/untitled.dir/untitled_autogen/EWIEGA46WW/qrc_qml.cpp.o"

# External object files for target untitled
untitled_EXTERNAL_OBJECTS =

untitled: CMakeFiles/untitled.dir/untitled_autogen/mocs_compilation.cpp.o
untitled: CMakeFiles/untitled.dir/untitled_autogen/EWIEGA46WW/qrc_qml.cpp.o
untitled: CMakeFiles/untitled.dir/build.make
untitled: CMakeFiles/untitled.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/office/src/cpp/Qt_cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable untitled"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled.dir/build: untitled

.PHONY : CMakeFiles/untitled.dir/build

CMakeFiles/untitled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled.dir/clean

CMakeFiles/untitled.dir/depend: untitled_autogen/EWIEGA46WW/qrc_qml.cpp
	cd /home/office/src/cpp/Qt_cmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/office/src/cpp/Qt_cmake /home/office/src/cpp/Qt_cmake /home/office/src/cpp/Qt_cmake/build /home/office/src/cpp/Qt_cmake/build /home/office/src/cpp/Qt_cmake/build/CMakeFiles/untitled.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled.dir/depend

