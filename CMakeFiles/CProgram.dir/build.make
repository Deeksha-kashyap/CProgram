# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Deeksha Kashyap\CLionProject\CProgram"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Deeksha Kashyap\CLionProject\CProgram"

# Include any dependencies generated for this target.
include CMakeFiles/CProgram.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CProgram.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CProgram.dir/flags.make

CMakeFiles/CProgram.dir/main.c.obj: CMakeFiles/CProgram.dir/flags.make
CMakeFiles/CProgram.dir/main.c.obj: main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Deeksha Kashyap\CLionProject\CProgram\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CProgram.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\CProgram.dir\main.c.obj   -c "C:\Users\Deeksha Kashyap\CLionProject\CProgram\main.c"

CMakeFiles/CProgram.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CProgram.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Deeksha Kashyap\CLionProject\CProgram\main.c" > CMakeFiles\CProgram.dir\main.c.i

CMakeFiles/CProgram.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CProgram.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Deeksha Kashyap\CLionProject\CProgram\main.c" -o CMakeFiles\CProgram.dir\main.c.s

# Object files for target CProgram
CProgram_OBJECTS = \
"CMakeFiles/CProgram.dir/main.c.obj"

# External object files for target CProgram
CProgram_EXTERNAL_OBJECTS =

CProgram.exe: CMakeFiles/CProgram.dir/main.c.obj
CProgram.exe: CMakeFiles/CProgram.dir/build.make
CProgram.exe: CMakeFiles/CProgram.dir/linklibs.rsp
CProgram.exe: CMakeFiles/CProgram.dir/objects1.rsp
CProgram.exe: CMakeFiles/CProgram.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Deeksha Kashyap\CLionProject\CProgram\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CProgram.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CProgram.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CProgram.dir/build: CProgram.exe

.PHONY : CMakeFiles/CProgram.dir/build

CMakeFiles/CProgram.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CProgram.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CProgram.dir/clean

CMakeFiles/CProgram.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Deeksha Kashyap\CLionProject\CProgram" "C:\Users\Deeksha Kashyap\CLionProject\CProgram" "C:\Users\Deeksha Kashyap\CLionProject\CProgram" "C:\Users\Deeksha Kashyap\CLionProject\CProgram" "C:\Users\Deeksha Kashyap\CLionProject\CProgram\CMakeFiles\CProgram.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CProgram.dir/depend

