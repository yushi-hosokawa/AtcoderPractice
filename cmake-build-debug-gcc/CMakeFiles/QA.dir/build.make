# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yushi/atcoder/AtcoderPractice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yushi/atcoder/AtcoderPractice/cmake-build-debug-gcc

# Include any dependencies generated for this target.
include CMakeFiles/QA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/QA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QA.dir/flags.make

CMakeFiles/QA.dir/ABC167/QA.cpp.o: CMakeFiles/QA.dir/flags.make
CMakeFiles/QA.dir/ABC167/QA.cpp.o: ../ABC167/QA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yushi/atcoder/AtcoderPractice/cmake-build-debug-gcc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/QA.dir/ABC167/QA.cpp.o"
	/usr/local/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/QA.dir/ABC167/QA.cpp.o -c /Users/yushi/atcoder/AtcoderPractice/ABC167/QA.cpp

CMakeFiles/QA.dir/ABC167/QA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QA.dir/ABC167/QA.cpp.i"
	/usr/local/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yushi/atcoder/AtcoderPractice/ABC167/QA.cpp > CMakeFiles/QA.dir/ABC167/QA.cpp.i

CMakeFiles/QA.dir/ABC167/QA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QA.dir/ABC167/QA.cpp.s"
	/usr/local/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yushi/atcoder/AtcoderPractice/ABC167/QA.cpp -o CMakeFiles/QA.dir/ABC167/QA.cpp.s

# Object files for target QA
QA_OBJECTS = \
"CMakeFiles/QA.dir/ABC167/QA.cpp.o"

# External object files for target QA
QA_EXTERNAL_OBJECTS =

QA: CMakeFiles/QA.dir/ABC167/QA.cpp.o
QA: CMakeFiles/QA.dir/build.make
QA: CMakeFiles/QA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yushi/atcoder/AtcoderPractice/cmake-build-debug-gcc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable QA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QA.dir/build: QA

.PHONY : CMakeFiles/QA.dir/build

CMakeFiles/QA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QA.dir/clean

CMakeFiles/QA.dir/depend:
	cd /Users/yushi/atcoder/AtcoderPractice/cmake-build-debug-gcc && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yushi/atcoder/AtcoderPractice /Users/yushi/atcoder/AtcoderPractice /Users/yushi/atcoder/AtcoderPractice/cmake-build-debug-gcc /Users/yushi/atcoder/AtcoderPractice/cmake-build-debug-gcc /Users/yushi/atcoder/AtcoderPractice/cmake-build-debug-gcc/CMakeFiles/QA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QA.dir/depend

