# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/deadmaggi/CLionProjects/Klasser

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/deadmaggi/CLionProjects/Klasser/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Klasser.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Klasser.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Klasser.dir/flags.make

CMakeFiles/Klasser.dir/main.cpp.o: CMakeFiles/Klasser.dir/flags.make
CMakeFiles/Klasser.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/deadmaggi/CLionProjects/Klasser/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Klasser.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Klasser.dir/main.cpp.o -c /Users/deadmaggi/CLionProjects/Klasser/main.cpp

CMakeFiles/Klasser.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Klasser.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/deadmaggi/CLionProjects/Klasser/main.cpp > CMakeFiles/Klasser.dir/main.cpp.i

CMakeFiles/Klasser.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Klasser.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/deadmaggi/CLionProjects/Klasser/main.cpp -o CMakeFiles/Klasser.dir/main.cpp.s

CMakeFiles/Klasser.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Klasser.dir/main.cpp.o.requires

CMakeFiles/Klasser.dir/main.cpp.o.provides: CMakeFiles/Klasser.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Klasser.dir/build.make CMakeFiles/Klasser.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Klasser.dir/main.cpp.o.provides

CMakeFiles/Klasser.dir/main.cpp.o.provides.build: CMakeFiles/Klasser.dir/main.cpp.o


CMakeFiles/Klasser.dir/Spiller.cpp.o: CMakeFiles/Klasser.dir/flags.make
CMakeFiles/Klasser.dir/Spiller.cpp.o: ../Spiller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/deadmaggi/CLionProjects/Klasser/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Klasser.dir/Spiller.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Klasser.dir/Spiller.cpp.o -c /Users/deadmaggi/CLionProjects/Klasser/Spiller.cpp

CMakeFiles/Klasser.dir/Spiller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Klasser.dir/Spiller.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/deadmaggi/CLionProjects/Klasser/Spiller.cpp > CMakeFiles/Klasser.dir/Spiller.cpp.i

CMakeFiles/Klasser.dir/Spiller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Klasser.dir/Spiller.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/deadmaggi/CLionProjects/Klasser/Spiller.cpp -o CMakeFiles/Klasser.dir/Spiller.cpp.s

CMakeFiles/Klasser.dir/Spiller.cpp.o.requires:

.PHONY : CMakeFiles/Klasser.dir/Spiller.cpp.o.requires

CMakeFiles/Klasser.dir/Spiller.cpp.o.provides: CMakeFiles/Klasser.dir/Spiller.cpp.o.requires
	$(MAKE) -f CMakeFiles/Klasser.dir/build.make CMakeFiles/Klasser.dir/Spiller.cpp.o.provides.build
.PHONY : CMakeFiles/Klasser.dir/Spiller.cpp.o.provides

CMakeFiles/Klasser.dir/Spiller.cpp.o.provides.build: CMakeFiles/Klasser.dir/Spiller.cpp.o


CMakeFiles/Klasser.dir/Konto.cpp.o: CMakeFiles/Klasser.dir/flags.make
CMakeFiles/Klasser.dir/Konto.cpp.o: ../Konto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/deadmaggi/CLionProjects/Klasser/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Klasser.dir/Konto.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Klasser.dir/Konto.cpp.o -c /Users/deadmaggi/CLionProjects/Klasser/Konto.cpp

CMakeFiles/Klasser.dir/Konto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Klasser.dir/Konto.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/deadmaggi/CLionProjects/Klasser/Konto.cpp > CMakeFiles/Klasser.dir/Konto.cpp.i

CMakeFiles/Klasser.dir/Konto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Klasser.dir/Konto.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/deadmaggi/CLionProjects/Klasser/Konto.cpp -o CMakeFiles/Klasser.dir/Konto.cpp.s

CMakeFiles/Klasser.dir/Konto.cpp.o.requires:

.PHONY : CMakeFiles/Klasser.dir/Konto.cpp.o.requires

CMakeFiles/Klasser.dir/Konto.cpp.o.provides: CMakeFiles/Klasser.dir/Konto.cpp.o.requires
	$(MAKE) -f CMakeFiles/Klasser.dir/build.make CMakeFiles/Klasser.dir/Konto.cpp.o.provides.build
.PHONY : CMakeFiles/Klasser.dir/Konto.cpp.o.provides

CMakeFiles/Klasser.dir/Konto.cpp.o.provides.build: CMakeFiles/Klasser.dir/Konto.cpp.o


CMakeFiles/Klasser.dir/Transaksjon.cpp.o: CMakeFiles/Klasser.dir/flags.make
CMakeFiles/Klasser.dir/Transaksjon.cpp.o: ../Transaksjon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/deadmaggi/CLionProjects/Klasser/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Klasser.dir/Transaksjon.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Klasser.dir/Transaksjon.cpp.o -c /Users/deadmaggi/CLionProjects/Klasser/Transaksjon.cpp

CMakeFiles/Klasser.dir/Transaksjon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Klasser.dir/Transaksjon.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/deadmaggi/CLionProjects/Klasser/Transaksjon.cpp > CMakeFiles/Klasser.dir/Transaksjon.cpp.i

CMakeFiles/Klasser.dir/Transaksjon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Klasser.dir/Transaksjon.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/deadmaggi/CLionProjects/Klasser/Transaksjon.cpp -o CMakeFiles/Klasser.dir/Transaksjon.cpp.s

CMakeFiles/Klasser.dir/Transaksjon.cpp.o.requires:

.PHONY : CMakeFiles/Klasser.dir/Transaksjon.cpp.o.requires

CMakeFiles/Klasser.dir/Transaksjon.cpp.o.provides: CMakeFiles/Klasser.dir/Transaksjon.cpp.o.requires
	$(MAKE) -f CMakeFiles/Klasser.dir/build.make CMakeFiles/Klasser.dir/Transaksjon.cpp.o.provides.build
.PHONY : CMakeFiles/Klasser.dir/Transaksjon.cpp.o.provides

CMakeFiles/Klasser.dir/Transaksjon.cpp.o.provides.build: CMakeFiles/Klasser.dir/Transaksjon.cpp.o


# Object files for target Klasser
Klasser_OBJECTS = \
"CMakeFiles/Klasser.dir/main.cpp.o" \
"CMakeFiles/Klasser.dir/Spiller.cpp.o" \
"CMakeFiles/Klasser.dir/Konto.cpp.o" \
"CMakeFiles/Klasser.dir/Transaksjon.cpp.o"

# External object files for target Klasser
Klasser_EXTERNAL_OBJECTS =

Klasser: CMakeFiles/Klasser.dir/main.cpp.o
Klasser: CMakeFiles/Klasser.dir/Spiller.cpp.o
Klasser: CMakeFiles/Klasser.dir/Konto.cpp.o
Klasser: CMakeFiles/Klasser.dir/Transaksjon.cpp.o
Klasser: CMakeFiles/Klasser.dir/build.make
Klasser: CMakeFiles/Klasser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/deadmaggi/CLionProjects/Klasser/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Klasser"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Klasser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Klasser.dir/build: Klasser

.PHONY : CMakeFiles/Klasser.dir/build

CMakeFiles/Klasser.dir/requires: CMakeFiles/Klasser.dir/main.cpp.o.requires
CMakeFiles/Klasser.dir/requires: CMakeFiles/Klasser.dir/Spiller.cpp.o.requires
CMakeFiles/Klasser.dir/requires: CMakeFiles/Klasser.dir/Konto.cpp.o.requires
CMakeFiles/Klasser.dir/requires: CMakeFiles/Klasser.dir/Transaksjon.cpp.o.requires

.PHONY : CMakeFiles/Klasser.dir/requires

CMakeFiles/Klasser.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Klasser.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Klasser.dir/clean

CMakeFiles/Klasser.dir/depend:
	cd /Users/deadmaggi/CLionProjects/Klasser/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/deadmaggi/CLionProjects/Klasser /Users/deadmaggi/CLionProjects/Klasser /Users/deadmaggi/CLionProjects/Klasser/cmake-build-debug /Users/deadmaggi/CLionProjects/Klasser/cmake-build-debug /Users/deadmaggi/CLionProjects/Klasser/cmake-build-debug/CMakeFiles/Klasser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Klasser.dir/depend

