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
CMAKE_SOURCE_DIR = C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Linked_List.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Linked_List.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Linked_List.dir/flags.make

CMakeFiles/Linked_List.dir/main.c.obj: CMakeFiles/Linked_List.dir/flags.make
CMakeFiles/Linked_List.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Linked_List.dir/main.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Linked_List.dir\main.c.obj   -c C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\main.c

CMakeFiles/Linked_List.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Linked_List.dir/main.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\main.c > CMakeFiles\Linked_List.dir\main.c.i

CMakeFiles/Linked_List.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Linked_List.dir/main.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\main.c -o CMakeFiles\Linked_List.dir\main.c.s

CMakeFiles/Linked_List.dir/functions.c.obj: CMakeFiles/Linked_List.dir/flags.make
CMakeFiles/Linked_List.dir/functions.c.obj: ../functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Linked_List.dir/functions.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Linked_List.dir\functions.c.obj   -c C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\functions.c

CMakeFiles/Linked_List.dir/functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Linked_List.dir/functions.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\functions.c > CMakeFiles\Linked_List.dir\functions.c.i

CMakeFiles/Linked_List.dir/functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Linked_List.dir/functions.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\functions.c -o CMakeFiles\Linked_List.dir\functions.c.s

# Object files for target Linked_List
Linked_List_OBJECTS = \
"CMakeFiles/Linked_List.dir/main.c.obj" \
"CMakeFiles/Linked_List.dir/functions.c.obj"

# External object files for target Linked_List
Linked_List_EXTERNAL_OBJECTS =

Linked_List.exe: CMakeFiles/Linked_List.dir/main.c.obj
Linked_List.exe: CMakeFiles/Linked_List.dir/functions.c.obj
Linked_List.exe: CMakeFiles/Linked_List.dir/build.make
Linked_List.exe: CMakeFiles/Linked_List.dir/linklibs.rsp
Linked_List.exe: CMakeFiles/Linked_List.dir/objects1.rsp
Linked_List.exe: CMakeFiles/Linked_List.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Linked_List.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Linked_List.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Linked_List.dir/build: Linked_List.exe

.PHONY : CMakeFiles/Linked_List.dir/build

CMakeFiles/Linked_List.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Linked_List.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Linked_List.dir/clean

CMakeFiles/Linked_List.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\cmake-build-debug C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\cmake-build-debug C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Labor06\Linked_List\cmake-build-debug\CMakeFiles\Linked_List.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Linked_List.dir/depend

