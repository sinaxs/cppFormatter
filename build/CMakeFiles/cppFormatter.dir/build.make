# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sinaxs/myRepo/cppFormatter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sinaxs/myRepo/cppFormatter/build

# Include any dependencies generated for this target.
include CMakeFiles/cppFormatter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cppFormatter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cppFormatter.dir/flags.make

CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o: CMakeFiles/cppFormatter.dir/flags.make
CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o: ../cppFormatter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinaxs/myRepo/cppFormatter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o -c /home/sinaxs/myRepo/cppFormatter/cppFormatter.cpp

CMakeFiles/cppFormatter.dir/cppFormatter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppFormatter.dir/cppFormatter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinaxs/myRepo/cppFormatter/cppFormatter.cpp > CMakeFiles/cppFormatter.dir/cppFormatter.cpp.i

CMakeFiles/cppFormatter.dir/cppFormatter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppFormatter.dir/cppFormatter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinaxs/myRepo/cppFormatter/cppFormatter.cpp -o CMakeFiles/cppFormatter.dir/cppFormatter.cpp.s

CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o.requires:

.PHONY : CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o.requires

CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o.provides: CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o.requires
	$(MAKE) -f CMakeFiles/cppFormatter.dir/build.make CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o.provides.build
.PHONY : CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o.provides

CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o.provides.build: CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o


# Object files for target cppFormatter
cppFormatter_OBJECTS = \
"CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o"

# External object files for target cppFormatter
cppFormatter_EXTERNAL_OBJECTS =

libcppFormatter.a: CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o
libcppFormatter.a: CMakeFiles/cppFormatter.dir/build.make
libcppFormatter.a: CMakeFiles/cppFormatter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sinaxs/myRepo/cppFormatter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libcppFormatter.a"
	$(CMAKE_COMMAND) -P CMakeFiles/cppFormatter.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cppFormatter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cppFormatter.dir/build: libcppFormatter.a

.PHONY : CMakeFiles/cppFormatter.dir/build

CMakeFiles/cppFormatter.dir/requires: CMakeFiles/cppFormatter.dir/cppFormatter.cpp.o.requires

.PHONY : CMakeFiles/cppFormatter.dir/requires

CMakeFiles/cppFormatter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cppFormatter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cppFormatter.dir/clean

CMakeFiles/cppFormatter.dir/depend:
	cd /home/sinaxs/myRepo/cppFormatter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sinaxs/myRepo/cppFormatter /home/sinaxs/myRepo/cppFormatter /home/sinaxs/myRepo/cppFormatter/build /home/sinaxs/myRepo/cppFormatter/build /home/sinaxs/myRepo/cppFormatter/build/CMakeFiles/cppFormatter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cppFormatter.dir/depend

