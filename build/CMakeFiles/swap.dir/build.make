# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/john_ubuntu_1/PROJECTS/SWAP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/john_ubuntu_1/PROJECTS/SWAP/build

# Include any dependencies generated for this target.
include CMakeFiles/swap.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/swap.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/swap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/swap.dir/flags.make

CMakeFiles/swap.dir/src/swap.c.o: CMakeFiles/swap.dir/flags.make
CMakeFiles/swap.dir/src/swap.c.o: ../src/swap.c
CMakeFiles/swap.dir/src/swap.c.o: CMakeFiles/swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/john_ubuntu_1/PROJECTS/SWAP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/swap.dir/src/swap.c.o"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/swap.dir/src/swap.c.o -MF CMakeFiles/swap.dir/src/swap.c.o.d -o CMakeFiles/swap.dir/src/swap.c.o -c /home/john_ubuntu_1/PROJECTS/SWAP/src/swap.c

CMakeFiles/swap.dir/src/swap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/swap.dir/src/swap.c.i"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/john_ubuntu_1/PROJECTS/SWAP/src/swap.c > CMakeFiles/swap.dir/src/swap.c.i

CMakeFiles/swap.dir/src/swap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/swap.dir/src/swap.c.s"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/john_ubuntu_1/PROJECTS/SWAP/src/swap.c -o CMakeFiles/swap.dir/src/swap.c.s

CMakeFiles/swap.dir/src/swap_func.c.o: CMakeFiles/swap.dir/flags.make
CMakeFiles/swap.dir/src/swap_func.c.o: ../src/swap_func.c
CMakeFiles/swap.dir/src/swap_func.c.o: CMakeFiles/swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/john_ubuntu_1/PROJECTS/SWAP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/swap.dir/src/swap_func.c.o"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/swap.dir/src/swap_func.c.o -MF CMakeFiles/swap.dir/src/swap_func.c.o.d -o CMakeFiles/swap.dir/src/swap_func.c.o -c /home/john_ubuntu_1/PROJECTS/SWAP/src/swap_func.c

CMakeFiles/swap.dir/src/swap_func.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/swap.dir/src/swap_func.c.i"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/john_ubuntu_1/PROJECTS/SWAP/src/swap_func.c > CMakeFiles/swap.dir/src/swap_func.c.i

CMakeFiles/swap.dir/src/swap_func.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/swap.dir/src/swap_func.c.s"
	/usr/bin/gcc-12 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/john_ubuntu_1/PROJECTS/SWAP/src/swap_func.c -o CMakeFiles/swap.dir/src/swap_func.c.s

# Object files for target swap
swap_OBJECTS = \
"CMakeFiles/swap.dir/src/swap.c.o" \
"CMakeFiles/swap.dir/src/swap_func.c.o"

# External object files for target swap
swap_EXTERNAL_OBJECTS =

swap: CMakeFiles/swap.dir/src/swap.c.o
swap: CMakeFiles/swap.dir/src/swap_func.c.o
swap: CMakeFiles/swap.dir/build.make
swap: CMakeFiles/swap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/john_ubuntu_1/PROJECTS/SWAP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable swap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/swap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/swap.dir/build: swap
.PHONY : CMakeFiles/swap.dir/build

CMakeFiles/swap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/swap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/swap.dir/clean

CMakeFiles/swap.dir/depend:
	cd /home/john_ubuntu_1/PROJECTS/SWAP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/john_ubuntu_1/PROJECTS/SWAP /home/john_ubuntu_1/PROJECTS/SWAP /home/john_ubuntu_1/PROJECTS/SWAP/build /home/john_ubuntu_1/PROJECTS/SWAP/build /home/john_ubuntu_1/PROJECTS/SWAP/build/CMakeFiles/swap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/swap.dir/depend

