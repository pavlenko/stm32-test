# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user1/PROJECTS/stm32-test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user1/PROJECTS/stm32-test/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stm32-test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stm32-test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stm32-test.dir/flags.make

CMakeFiles/stm32-test.dir/lib/PCD8544/src/PCD8544.cpp.o: CMakeFiles/stm32-test.dir/flags.make
CMakeFiles/stm32-test.dir/lib/PCD8544/src/PCD8544.cpp.o: ../lib/PCD8544/src/PCD8544.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user1/PROJECTS/stm32-test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stm32-test.dir/lib/PCD8544/src/PCD8544.cpp.o"
	/home/user1/.platformio/packages/toolchain-gccarmnoneeabi/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stm32-test.dir/lib/PCD8544/src/PCD8544.cpp.o -c /home/user1/PROJECTS/stm32-test/lib/PCD8544/src/PCD8544.cpp

CMakeFiles/stm32-test.dir/lib/PCD8544/src/PCD8544.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stm32-test.dir/lib/PCD8544/src/PCD8544.cpp.i"
	/home/user1/.platformio/packages/toolchain-gccarmnoneeabi/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user1/PROJECTS/stm32-test/lib/PCD8544/src/PCD8544.cpp > CMakeFiles/stm32-test.dir/lib/PCD8544/src/PCD8544.cpp.i

CMakeFiles/stm32-test.dir/lib/PCD8544/src/PCD8544.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stm32-test.dir/lib/PCD8544/src/PCD8544.cpp.s"
	/home/user1/.platformio/packages/toolchain-gccarmnoneeabi/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user1/PROJECTS/stm32-test/lib/PCD8544/src/PCD8544.cpp -o CMakeFiles/stm32-test.dir/lib/PCD8544/src/PCD8544.cpp.s

CMakeFiles/stm32-test.dir/src/main.cpp.o: CMakeFiles/stm32-test.dir/flags.make
CMakeFiles/stm32-test.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user1/PROJECTS/stm32-test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/stm32-test.dir/src/main.cpp.o"
	/home/user1/.platformio/packages/toolchain-gccarmnoneeabi/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stm32-test.dir/src/main.cpp.o -c /home/user1/PROJECTS/stm32-test/src/main.cpp

CMakeFiles/stm32-test.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stm32-test.dir/src/main.cpp.i"
	/home/user1/.platformio/packages/toolchain-gccarmnoneeabi/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user1/PROJECTS/stm32-test/src/main.cpp > CMakeFiles/stm32-test.dir/src/main.cpp.i

CMakeFiles/stm32-test.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stm32-test.dir/src/main.cpp.s"
	/home/user1/.platformio/packages/toolchain-gccarmnoneeabi/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user1/PROJECTS/stm32-test/src/main.cpp -o CMakeFiles/stm32-test.dir/src/main.cpp.s

# Object files for target stm32-test
stm32__test_OBJECTS = \
"CMakeFiles/stm32-test.dir/lib/PCD8544/src/PCD8544.cpp.o" \
"CMakeFiles/stm32-test.dir/src/main.cpp.o"

# External object files for target stm32-test
stm32__test_EXTERNAL_OBJECTS =

stm32-test: CMakeFiles/stm32-test.dir/lib/PCD8544/src/PCD8544.cpp.o
stm32-test: CMakeFiles/stm32-test.dir/src/main.cpp.o
stm32-test: CMakeFiles/stm32-test.dir/build.make
stm32-test: CMakeFiles/stm32-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user1/PROJECTS/stm32-test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable stm32-test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stm32-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stm32-test.dir/build: stm32-test

.PHONY : CMakeFiles/stm32-test.dir/build

CMakeFiles/stm32-test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stm32-test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stm32-test.dir/clean

CMakeFiles/stm32-test.dir/depend:
	cd /home/user1/PROJECTS/stm32-test/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user1/PROJECTS/stm32-test /home/user1/PROJECTS/stm32-test /home/user1/PROJECTS/stm32-test/cmake-build-debug /home/user1/PROJECTS/stm32-test/cmake-build-debug /home/user1/PROJECTS/stm32-test/cmake-build-debug/CMakeFiles/stm32-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stm32-test.dir/depend

