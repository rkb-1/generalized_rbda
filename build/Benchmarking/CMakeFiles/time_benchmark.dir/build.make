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
include Benchmarking/CMakeFiles/time_benchmark.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Benchmarking/CMakeFiles/time_benchmark.dir/compiler_depend.make

# Include the progress variables for this target.
include Benchmarking/CMakeFiles/time_benchmark.dir/progress.make

# Include the compile flags for this target's objects.
include Benchmarking/CMakeFiles/time_benchmark.dir/flags.make

Benchmarking/CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.o: Benchmarking/CMakeFiles/time_benchmark.dir/flags.make
Benchmarking/CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.o: /Users/matthewchignoli/repos/generalized_rbda/Benchmarking/timeBenchmarkForwardDynamics.cpp
Benchmarking/CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.o: Benchmarking/CMakeFiles/time_benchmark.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthewchignoli/repos/generalized_rbda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Benchmarking/CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.o"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Benchmarking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Benchmarking/CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.o -MF CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.o.d -o CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.o -c /Users/matthewchignoli/repos/generalized_rbda/Benchmarking/timeBenchmarkForwardDynamics.cpp

Benchmarking/CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.i"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Benchmarking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthewchignoli/repos/generalized_rbda/Benchmarking/timeBenchmarkForwardDynamics.cpp > CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.i

Benchmarking/CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.s"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Benchmarking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthewchignoli/repos/generalized_rbda/Benchmarking/timeBenchmarkForwardDynamics.cpp -o CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.s

# Object files for target time_benchmark
time_benchmark_OBJECTS = \
"CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.o"

# External object files for target time_benchmark
time_benchmark_EXTERNAL_OBJECTS =

bin/time_benchmark: Benchmarking/CMakeFiles/time_benchmark.dir/timeBenchmarkForwardDynamics.cpp.o
bin/time_benchmark: Benchmarking/CMakeFiles/time_benchmark.dir/build.make
bin/time_benchmark: lib/librobots.dylib
bin/time_benchmark: lib/libdyna-engine.dylib
bin/time_benchmark: lib/libnodes.dylib
bin/time_benchmark: lib/libgen-joints.dylib
bin/time_benchmark: lib/libdyna-urdf.dylib
bin/time_benchmark: lib/libcasadigen.dylib
bin/time_benchmark: lib/libdyna-utils.dylib
bin/time_benchmark: /opt/homebrew/lib/liblcm.1.4.0.dylib
bin/time_benchmark: lib/libdaros_param_handler.dylib
bin/time_benchmark: lib/libdaros_yaml-cpp.0.5.3.dylib
bin/time_benchmark: Benchmarking/CMakeFiles/time_benchmark.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/matthewchignoli/repos/generalized_rbda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/time_benchmark"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Benchmarking && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/time_benchmark.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Benchmarking/CMakeFiles/time_benchmark.dir/build: bin/time_benchmark
.PHONY : Benchmarking/CMakeFiles/time_benchmark.dir/build

Benchmarking/CMakeFiles/time_benchmark.dir/clean:
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Benchmarking && $(CMAKE_COMMAND) -P CMakeFiles/time_benchmark.dir/cmake_clean.cmake
.PHONY : Benchmarking/CMakeFiles/time_benchmark.dir/clean

Benchmarking/CMakeFiles/time_benchmark.dir/depend:
	cd /Users/matthewchignoli/repos/generalized_rbda/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/matthewchignoli/repos/generalized_rbda /Users/matthewchignoli/repos/generalized_rbda/Benchmarking /Users/matthewchignoli/repos/generalized_rbda/build /Users/matthewchignoli/repos/generalized_rbda/build/Benchmarking /Users/matthewchignoli/repos/generalized_rbda/build/Benchmarking/CMakeFiles/time_benchmark.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Benchmarking/CMakeFiles/time_benchmark.dir/depend

