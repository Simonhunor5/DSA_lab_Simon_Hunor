# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Stack.dir/flags.make

CMakeFiles/Stack.dir/main.c.obj: CMakeFiles/Stack.dir/flags.make
CMakeFiles/Stack.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Stack.dir/main.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Stack.dir\main.c.obj   -c C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\main.c

CMakeFiles/Stack.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Stack.dir/main.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\main.c > CMakeFiles\Stack.dir\main.c.i

CMakeFiles/Stack.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Stack.dir/main.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\main.c -o CMakeFiles\Stack.dir\main.c.s

CMakeFiles/Stack.dir/functions.c.obj: CMakeFiles/Stack.dir/flags.make
CMakeFiles/Stack.dir/functions.c.obj: ../functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Stack.dir/functions.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Stack.dir\functions.c.obj   -c C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\functions.c

CMakeFiles/Stack.dir/functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Stack.dir/functions.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\functions.c > CMakeFiles\Stack.dir\functions.c.i

CMakeFiles/Stack.dir/functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Stack.dir/functions.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\functions.c -o CMakeFiles\Stack.dir\functions.c.s

# Object files for target Stack
Stack_OBJECTS = \
"CMakeFiles/Stack.dir/main.c.obj" \
"CMakeFiles/Stack.dir/functions.c.obj"

# External object files for target Stack
Stack_EXTERNAL_OBJECTS =

Stack.exe: CMakeFiles/Stack.dir/main.c.obj
Stack.exe: CMakeFiles/Stack.dir/functions.c.obj
Stack.exe: CMakeFiles/Stack.dir/build.make
Stack.exe: CMakeFiles/Stack.dir/linklibs.rsp
Stack.exe: CMakeFiles/Stack.dir/objects1.rsp
Stack.exe: CMakeFiles/Stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Stack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Stack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Stack.dir/build: Stack.exe

.PHONY : CMakeFiles/Stack.dir/build

CMakeFiles/Stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Stack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Stack.dir/clean

CMakeFiles/Stack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\cmake-build-debug C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\cmake-build-debug C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Stack\cmake-build-debug\CMakeFiles\Stack.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Stack.dir/depend

