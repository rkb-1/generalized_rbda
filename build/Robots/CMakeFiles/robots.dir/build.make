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
include Robots/CMakeFiles/robots.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Robots/CMakeFiles/robots.dir/compiler_depend.make

# Include the progress variables for this target.
include Robots/CMakeFiles/robots.dir/progress.make

# Include the compile flags for this target's objects.
include Robots/CMakeFiles/robots.dir/flags.make

Robots/CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.o: Robots/CMakeFiles/robots.dir/flags.make
Robots/CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.o: /Users/matthewchignoli/repos/generalized_rbda/Robots/RevoluteChainMultiplerRotorsPerLink.cpp
Robots/CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.o: Robots/CMakeFiles/robots.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthewchignoli/repos/generalized_rbda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Robots/CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.o"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Robots/CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.o -MF CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.o.d -o CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.o -c /Users/matthewchignoli/repos/generalized_rbda/Robots/RevoluteChainMultiplerRotorsPerLink.cpp

Robots/CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.i"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthewchignoli/repos/generalized_rbda/Robots/RevoluteChainMultiplerRotorsPerLink.cpp > CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.i

Robots/CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.s"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthewchignoli/repos/generalized_rbda/Robots/RevoluteChainMultiplerRotorsPerLink.cpp -o CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.s

Robots/CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.o: Robots/CMakeFiles/robots.dir/flags.make
Robots/CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.o: /Users/matthewchignoli/repos/generalized_rbda/Robots/RevoluteChainWithAndWithoutRotor.cpp
Robots/CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.o: Robots/CMakeFiles/robots.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthewchignoli/repos/generalized_rbda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Robots/CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.o"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Robots/CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.o -MF CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.o.d -o CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.o -c /Users/matthewchignoli/repos/generalized_rbda/Robots/RevoluteChainWithAndWithoutRotor.cpp

Robots/CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.i"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthewchignoli/repos/generalized_rbda/Robots/RevoluteChainWithAndWithoutRotor.cpp > CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.i

Robots/CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.s"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthewchignoli/repos/generalized_rbda/Robots/RevoluteChainWithAndWithoutRotor.cpp -o CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.s

Robots/CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.o: Robots/CMakeFiles/robots.dir/flags.make
Robots/CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.o: /Users/matthewchignoli/repos/generalized_rbda/Robots/RevoluteChainWithRotor.cpp
Robots/CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.o: Robots/CMakeFiles/robots.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthewchignoli/repos/generalized_rbda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Robots/CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.o"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Robots/CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.o -MF CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.o.d -o CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.o -c /Users/matthewchignoli/repos/generalized_rbda/Robots/RevoluteChainWithRotor.cpp

Robots/CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.i"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthewchignoli/repos/generalized_rbda/Robots/RevoluteChainWithRotor.cpp > CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.i

Robots/CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.s"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthewchignoli/repos/generalized_rbda/Robots/RevoluteChainWithRotor.cpp -o CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.s

Robots/CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.o: Robots/CMakeFiles/robots.dir/flags.make
Robots/CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.o: /Users/matthewchignoli/repos/generalized_rbda/Robots/RevolutePairChainWithRotor.cpp
Robots/CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.o: Robots/CMakeFiles/robots.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthewchignoli/repos/generalized_rbda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Robots/CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.o"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Robots/CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.o -MF CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.o.d -o CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.o -c /Users/matthewchignoli/repos/generalized_rbda/Robots/RevolutePairChainWithRotor.cpp

Robots/CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.i"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthewchignoli/repos/generalized_rbda/Robots/RevolutePairChainWithRotor.cpp > CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.i

Robots/CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.s"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthewchignoli/repos/generalized_rbda/Robots/RevolutePairChainWithRotor.cpp -o CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.s

Robots/CMakeFiles/robots.dir/TeleopArm.cpp.o: Robots/CMakeFiles/robots.dir/flags.make
Robots/CMakeFiles/robots.dir/TeleopArm.cpp.o: /Users/matthewchignoli/repos/generalized_rbda/Robots/TeleopArm.cpp
Robots/CMakeFiles/robots.dir/TeleopArm.cpp.o: Robots/CMakeFiles/robots.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthewchignoli/repos/generalized_rbda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Robots/CMakeFiles/robots.dir/TeleopArm.cpp.o"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Robots/CMakeFiles/robots.dir/TeleopArm.cpp.o -MF CMakeFiles/robots.dir/TeleopArm.cpp.o.d -o CMakeFiles/robots.dir/TeleopArm.cpp.o -c /Users/matthewchignoli/repos/generalized_rbda/Robots/TeleopArm.cpp

Robots/CMakeFiles/robots.dir/TeleopArm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robots.dir/TeleopArm.cpp.i"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthewchignoli/repos/generalized_rbda/Robots/TeleopArm.cpp > CMakeFiles/robots.dir/TeleopArm.cpp.i

Robots/CMakeFiles/robots.dir/TeleopArm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robots.dir/TeleopArm.cpp.s"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthewchignoli/repos/generalized_rbda/Robots/TeleopArm.cpp -o CMakeFiles/robots.dir/TeleopArm.cpp.s

# Object files for target robots
robots_OBJECTS = \
"CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.o" \
"CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.o" \
"CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.o" \
"CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.o" \
"CMakeFiles/robots.dir/TeleopArm.cpp.o"

# External object files for target robots
robots_EXTERNAL_OBJECTS =

lib/librobots.dylib: Robots/CMakeFiles/robots.dir/RevoluteChainMultiplerRotorsPerLink.cpp.o
lib/librobots.dylib: Robots/CMakeFiles/robots.dir/RevoluteChainWithAndWithoutRotor.cpp.o
lib/librobots.dylib: Robots/CMakeFiles/robots.dir/RevoluteChainWithRotor.cpp.o
lib/librobots.dylib: Robots/CMakeFiles/robots.dir/RevolutePairChainWithRotor.cpp.o
lib/librobots.dylib: Robots/CMakeFiles/robots.dir/TeleopArm.cpp.o
lib/librobots.dylib: Robots/CMakeFiles/robots.dir/build.make
lib/librobots.dylib: lib/libdyna-engine.dylib
lib/librobots.dylib: lib/libcasadigen.dylib
lib/librobots.dylib: lib/libnodes.dylib
lib/librobots.dylib: lib/libgen-joints.dylib
lib/librobots.dylib: lib/libdyna-urdf.dylib
lib/librobots.dylib: lib/libdyna-utils.dylib
lib/librobots.dylib: /opt/homebrew/lib/liblcm.1.4.0.dylib
lib/librobots.dylib: lib/libdaros_param_handler.dylib
lib/librobots.dylib: lib/libdaros_yaml-cpp.0.5.3.dylib
lib/librobots.dylib: Robots/CMakeFiles/robots.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/matthewchignoli/repos/generalized_rbda/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ../lib/librobots.dylib"
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/robots.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Robots/CMakeFiles/robots.dir/build: lib/librobots.dylib
.PHONY : Robots/CMakeFiles/robots.dir/build

Robots/CMakeFiles/robots.dir/clean:
	cd /Users/matthewchignoli/repos/generalized_rbda/build/Robots && $(CMAKE_COMMAND) -P CMakeFiles/robots.dir/cmake_clean.cmake
.PHONY : Robots/CMakeFiles/robots.dir/clean

Robots/CMakeFiles/robots.dir/depend:
	cd /Users/matthewchignoli/repos/generalized_rbda/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/matthewchignoli/repos/generalized_rbda /Users/matthewchignoli/repos/generalized_rbda/Robots /Users/matthewchignoli/repos/generalized_rbda/build /Users/matthewchignoli/repos/generalized_rbda/build/Robots /Users/matthewchignoli/repos/generalized_rbda/build/Robots/CMakeFiles/robots.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Robots/CMakeFiles/robots.dir/depend

