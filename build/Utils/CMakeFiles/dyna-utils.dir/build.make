# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.25.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.25.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/matthewchignoli/repos/generalized_rbda

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/matthewchignoli/repos/generalized_rbda/build

# Include any dependencies generated for this target.
include Utils/CMakeFiles/dyna-utils.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Utils/CMakeFiles/dyna-utils.dir/compiler_depend.make

# Include the progress variables for this target.
include Utils/CMakeFiles/dyna-utils.dir/progress.make

# Include the compile flags for this target's objects.
include Utils/CMakeFiles/dyna-utils.dir/flags.make

Utils/CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.o: Utils/CMakeFiles/dyna-utils.dir/flags.make
Utils/CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.o: /Users/matthewchignoli/repos/generalized_rbda/Utils/Utilities/SpatialTransforms.cpp
Utils/CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.o: Utils/CMakeFiles/dyna-utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthewchignoli/repos/generalized_rbda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Utils/CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.o"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Utils/CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.o -MF CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.o.d -o CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.o -c /Users/matthewchignoli/repos/generalized_rbda/Utils/Utilities/SpatialTransforms.cpp

Utils/CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.i"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthewchignoli/repos/generalized_rbda/Utils/Utilities/SpatialTransforms.cpp > CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.i

Utils/CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.s"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthewchignoli/repos/generalized_rbda/Utils/Utilities/SpatialTransforms.cpp -o CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.s

Utils/CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.o: Utils/CMakeFiles/dyna-utils.dir/flags.make
Utils/CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.o: /Users/matthewchignoli/repos/generalized_rbda/Utils/Utilities/pretty_print.cpp
Utils/CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.o: Utils/CMakeFiles/dyna-utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthewchignoli/repos/generalized_rbda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Utils/CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.o"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Utils/CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.o -MF CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.o.d -o CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.o -c /Users/matthewchignoli/repos/generalized_rbda/Utils/Utilities/pretty_print.cpp

Utils/CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.i"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthewchignoli/repos/generalized_rbda/Utils/Utilities/pretty_print.cpp > CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.i

Utils/CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.s"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthewchignoli/repos/generalized_rbda/Utils/Utilities/pretty_print.cpp -o CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.s

Utils/CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.o: Utils/CMakeFiles/dyna-utils.dir/flags.make
Utils/CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.o: /Users/matthewchignoli/repos/generalized_rbda/Utils/Utilities/utilities.cpp
Utils/CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.o: Utils/CMakeFiles/dyna-utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthewchignoli/repos/generalized_rbda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Utils/CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.o"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Utils/CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.o -MF CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.o.d -o CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.o -c /Users/matthewchignoli/repos/generalized_rbda/Utils/Utilities/utilities.cpp

Utils/CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.i"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthewchignoli/repos/generalized_rbda/Utils/Utilities/utilities.cpp > CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.i

Utils/CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.s"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Utils && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthewchignoli/repos/generalized_rbda/Utils/Utilities/utilities.cpp -o CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.s

# Object files for target dyna-utils
dyna__utils_OBJECTS = \
"CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.o" \
"CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.o" \
"CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.o"

# External object files for target dyna-utils
dyna__utils_EXTERNAL_OBJECTS =

lib/libdyna-utils.dylib: Utils/CMakeFiles/dyna-utils.dir/Utilities/SpatialTransforms.cpp.o
lib/libdyna-utils.dylib: Utils/CMakeFiles/dyna-utils.dir/Utilities/pretty_print.cpp.o
lib/libdyna-utils.dylib: Utils/CMakeFiles/dyna-utils.dir/Utilities/utilities.cpp.o
lib/libdyna-utils.dylib: Utils/CMakeFiles/dyna-utils.dir/build.make
lib/libdyna-utils.dylib: /opt/homebrew/lib/liblcm.1.4.0.dylib
lib/libdyna-utils.dylib: lib/libdaros_param_handler.dylib
lib/libdyna-utils.dylib: lib/libdaros_yaml-cpp.0.5.3.dylib
lib/libdyna-utils.dylib: Utils/CMakeFiles/dyna-utils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/matthewchignoli/repos/generalized_rbda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library ../lib/libdyna-utils.dylib"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Utils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dyna-utils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Utils/CMakeFiles/dyna-utils.dir/build: lib/libdyna-utils.dylib
.PHONY : Utils/CMakeFiles/dyna-utils.dir/build

Utils/CMakeFiles/dyna-utils.dir/clean:
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Utils && $(CMAKE_COMMAND) -P CMakeFiles/dyna-utils.dir/cmake_clean.cmake
.PHONY : Utils/CMakeFiles/dyna-utils.dir/clean

Utils/CMakeFiles/dyna-utils.dir/depend:
	cd /Users/matthewchignoli/repos/generalized_rbda/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/matthewchignoli/repos/generalized_rbda /Users/matthewchignoli/repos/generalized_rbda/Utils /Users/matthewchignoli/repos/generalized_rbda/build /Users/matthewchignoli/repos/generalized_rbda/build/Utils /Users/matthewchignoli/repos/generalized_rbda/build/Utils/CMakeFiles/dyna-utils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Utils/CMakeFiles/dyna-utils.dir/depend

