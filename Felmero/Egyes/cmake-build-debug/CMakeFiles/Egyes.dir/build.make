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
CMAKE_SOURCE_DIR = C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Egyes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Egyes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Egyes.dir/flags.make

CMakeFiles/Egyes.dir/main.c.obj: CMakeFiles/Egyes.dir/flags.make
CMakeFiles/Egyes.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Egyes.dir/main.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Egyes.dir\main.c.obj   -c C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\main.c

CMakeFiles/Egyes.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Egyes.dir/main.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\main.c > CMakeFiles\Egyes.dir\main.c.i

CMakeFiles/Egyes.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Egyes.dir/main.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\main.c -o CMakeFiles\Egyes.dir\main.c.s

CMakeFiles/Egyes.dir/functuins.c.obj: CMakeFiles/Egyes.dir/flags.make
CMakeFiles/Egyes.dir/functuins.c.obj: ../functuins.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Egyes.dir/functuins.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Egyes.dir\functuins.c.obj   -c C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\functuins.c

CMakeFiles/Egyes.dir/functuins.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Egyes.dir/functuins.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\functuins.c > CMakeFiles\Egyes.dir\functuins.c.i

CMakeFiles/Egyes.dir/functuins.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Egyes.dir/functuins.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\functuins.c -o CMakeFiles\Egyes.dir\functuins.c.s

# Object files for target Egyes
Egyes_OBJECTS = \
"CMakeFiles/Egyes.dir/main.c.obj" \
"CMakeFiles/Egyes.dir/functuins.c.obj"

# External object files for target Egyes
Egyes_EXTERNAL_OBJECTS =

Egyes.exe: CMakeFiles/Egyes.dir/main.c.obj
Egyes.exe: CMakeFiles/Egyes.dir/functuins.c.obj
Egyes.exe: CMakeFiles/Egyes.dir/build.make
Egyes.exe: CMakeFiles/Egyes.dir/linklibs.rsp
Egyes.exe: CMakeFiles/Egyes.dir/objects1.rsp
Egyes.exe: CMakeFiles/Egyes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Egyes.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Egyes.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Egyes.dir/build: Egyes.exe

.PHONY : CMakeFiles/Egyes.dir/build

CMakeFiles/Egyes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Egyes.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Egyes.dir/clean

CMakeFiles/Egyes.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\cmake-build-debug C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\cmake-build-debug C:\Users\simon\Documents\DSA_lab\DSA_lab_Simon_Hunor\Felmero\Egyes\cmake-build-debug\CMakeFiles\Egyes.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Egyes.dir/depend

