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
CMAKE_COMMAND = /cygdrive/c/Users/spong/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/spong/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/spong/Games

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/spong/Games/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Games.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Games.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Games.dir/flags.make

CMakeFiles/Games.dir/main.cpp.o: CMakeFiles/Games.dir/flags.make
CMakeFiles/Games.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/spong/Games/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Games.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Games.dir/main.cpp.o -c /cygdrive/c/Users/spong/Games/main.cpp

CMakeFiles/Games.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Games.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/spong/Games/main.cpp > CMakeFiles/Games.dir/main.cpp.i

CMakeFiles/Games.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Games.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/spong/Games/main.cpp -o CMakeFiles/Games.dir/main.cpp.s

CMakeFiles/Games.dir/ConnectN.cpp.o: CMakeFiles/Games.dir/flags.make
CMakeFiles/Games.dir/ConnectN.cpp.o: ../ConnectN.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/spong/Games/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Games.dir/ConnectN.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Games.dir/ConnectN.cpp.o -c /cygdrive/c/Users/spong/Games/ConnectN.cpp

CMakeFiles/Games.dir/ConnectN.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Games.dir/ConnectN.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/spong/Games/ConnectN.cpp > CMakeFiles/Games.dir/ConnectN.cpp.i

CMakeFiles/Games.dir/ConnectN.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Games.dir/ConnectN.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/spong/Games/ConnectN.cpp -o CMakeFiles/Games.dir/ConnectN.cpp.s

CMakeFiles/Games.dir/Player.cpp.o: CMakeFiles/Games.dir/flags.make
CMakeFiles/Games.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/spong/Games/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Games.dir/Player.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Games.dir/Player.cpp.o -c /cygdrive/c/Users/spong/Games/Player.cpp

CMakeFiles/Games.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Games.dir/Player.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/spong/Games/Player.cpp > CMakeFiles/Games.dir/Player.cpp.i

CMakeFiles/Games.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Games.dir/Player.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/spong/Games/Player.cpp -o CMakeFiles/Games.dir/Player.cpp.s

CMakeFiles/Games.dir/Board.cpp.o: CMakeFiles/Games.dir/flags.make
CMakeFiles/Games.dir/Board.cpp.o: ../Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/spong/Games/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Games.dir/Board.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Games.dir/Board.cpp.o -c /cygdrive/c/Users/spong/Games/Board.cpp

CMakeFiles/Games.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Games.dir/Board.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/spong/Games/Board.cpp > CMakeFiles/Games.dir/Board.cpp.i

CMakeFiles/Games.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Games.dir/Board.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/spong/Games/Board.cpp -o CMakeFiles/Games.dir/Board.cpp.s

CMakeFiles/Games.dir/Move.cpp.o: CMakeFiles/Games.dir/flags.make
CMakeFiles/Games.dir/Move.cpp.o: ../Move.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/spong/Games/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Games.dir/Move.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Games.dir/Move.cpp.o -c /cygdrive/c/Users/spong/Games/Move.cpp

CMakeFiles/Games.dir/Move.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Games.dir/Move.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/spong/Games/Move.cpp > CMakeFiles/Games.dir/Move.cpp.i

CMakeFiles/Games.dir/Move.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Games.dir/Move.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/spong/Games/Move.cpp -o CMakeFiles/Games.dir/Move.cpp.s

# Object files for target Games
Games_OBJECTS = \
"CMakeFiles/Games.dir/main.cpp.o" \
"CMakeFiles/Games.dir/ConnectN.cpp.o" \
"CMakeFiles/Games.dir/Player.cpp.o" \
"CMakeFiles/Games.dir/Board.cpp.o" \
"CMakeFiles/Games.dir/Move.cpp.o"

# External object files for target Games
Games_EXTERNAL_OBJECTS =

Games.exe: CMakeFiles/Games.dir/main.cpp.o
Games.exe: CMakeFiles/Games.dir/ConnectN.cpp.o
Games.exe: CMakeFiles/Games.dir/Player.cpp.o
Games.exe: CMakeFiles/Games.dir/Board.cpp.o
Games.exe: CMakeFiles/Games.dir/Move.cpp.o
Games.exe: CMakeFiles/Games.dir/build.make
Games.exe: CMakeFiles/Games.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/spong/Games/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Games.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Games.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Games.dir/build: Games.exe

.PHONY : CMakeFiles/Games.dir/build

CMakeFiles/Games.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Games.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Games.dir/clean

CMakeFiles/Games.dir/depend:
	cd /cygdrive/c/Users/spong/Games/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/spong/Games /cygdrive/c/Users/spong/Games /cygdrive/c/Users/spong/Games/cmake-build-debug /cygdrive/c/Users/spong/Games/cmake-build-debug /cygdrive/c/Users/spong/Games/cmake-build-debug/CMakeFiles/Games.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Games.dir/depend
