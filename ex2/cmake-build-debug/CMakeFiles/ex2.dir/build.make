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
CMAKE_COMMAND = /home/omer/clion-2017.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/omer/clion-2017.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ex2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex2.dir/flags.make

CMakeFiles/ex2.dir/board.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/board.cpp.o: ../board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex2.dir/board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/board.cpp.o -c "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/board.cpp"

CMakeFiles/ex2.dir/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/board.cpp" > CMakeFiles/ex2.dir/board.cpp.i

CMakeFiles/ex2.dir/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/board.cpp" -o CMakeFiles/ex2.dir/board.cpp.s

CMakeFiles/ex2.dir/board.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/board.cpp.o.requires

CMakeFiles/ex2.dir/board.cpp.o.provides: CMakeFiles/ex2.dir/board.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/board.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/board.cpp.o.provides

CMakeFiles/ex2.dir/board.cpp.o.provides.build: CMakeFiles/ex2.dir/board.cpp.o


CMakeFiles/ex2.dir/cell.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/cell.cpp.o: ../cell.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex2.dir/cell.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/cell.cpp.o -c "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cell.cpp"

CMakeFiles/ex2.dir/cell.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/cell.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cell.cpp" > CMakeFiles/ex2.dir/cell.cpp.i

CMakeFiles/ex2.dir/cell.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/cell.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cell.cpp" -o CMakeFiles/ex2.dir/cell.cpp.s

CMakeFiles/ex2.dir/cell.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/cell.cpp.o.requires

CMakeFiles/ex2.dir/cell.cpp.o.provides: CMakeFiles/ex2.dir/cell.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/cell.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/cell.cpp.o.provides

CMakeFiles/ex2.dir/cell.cpp.o.provides.build: CMakeFiles/ex2.dir/cell.cpp.o


CMakeFiles/ex2.dir/consoleDisplay.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/consoleDisplay.cpp.o: ../consoleDisplay.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex2.dir/consoleDisplay.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/consoleDisplay.cpp.o -c "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/consoleDisplay.cpp"

CMakeFiles/ex2.dir/consoleDisplay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/consoleDisplay.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/consoleDisplay.cpp" > CMakeFiles/ex2.dir/consoleDisplay.cpp.i

CMakeFiles/ex2.dir/consoleDisplay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/consoleDisplay.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/consoleDisplay.cpp" -o CMakeFiles/ex2.dir/consoleDisplay.cpp.s

CMakeFiles/ex2.dir/consoleDisplay.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/consoleDisplay.cpp.o.requires

CMakeFiles/ex2.dir/consoleDisplay.cpp.o.provides: CMakeFiles/ex2.dir/consoleDisplay.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/consoleDisplay.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/consoleDisplay.cpp.o.provides

CMakeFiles/ex2.dir/consoleDisplay.cpp.o.provides.build: CMakeFiles/ex2.dir/consoleDisplay.cpp.o


CMakeFiles/ex2.dir/game.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/game.cpp.o: ../game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex2.dir/game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/game.cpp.o -c "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/game.cpp"

CMakeFiles/ex2.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/game.cpp" > CMakeFiles/ex2.dir/game.cpp.i

CMakeFiles/ex2.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/game.cpp" -o CMakeFiles/ex2.dir/game.cpp.s

CMakeFiles/ex2.dir/game.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/game.cpp.o.requires

CMakeFiles/ex2.dir/game.cpp.o.provides: CMakeFiles/ex2.dir/game.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/game.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/game.cpp.o.provides

CMakeFiles/ex2.dir/game.cpp.o.provides.build: CMakeFiles/ex2.dir/game.cpp.o


CMakeFiles/ex2.dir/human.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/human.cpp.o: ../human.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex2.dir/human.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/human.cpp.o -c "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/human.cpp"

CMakeFiles/ex2.dir/human.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/human.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/human.cpp" > CMakeFiles/ex2.dir/human.cpp.i

CMakeFiles/ex2.dir/human.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/human.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/human.cpp" -o CMakeFiles/ex2.dir/human.cpp.s

CMakeFiles/ex2.dir/human.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/human.cpp.o.requires

CMakeFiles/ex2.dir/human.cpp.o.provides: CMakeFiles/ex2.dir/human.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/human.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/human.cpp.o.provides

CMakeFiles/ex2.dir/human.cpp.o.provides.build: CMakeFiles/ex2.dir/human.cpp.o


CMakeFiles/ex2.dir/logic.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/logic.cpp.o: ../logic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ex2.dir/logic.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/logic.cpp.o -c "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/logic.cpp"

CMakeFiles/ex2.dir/logic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/logic.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/logic.cpp" > CMakeFiles/ex2.dir/logic.cpp.i

CMakeFiles/ex2.dir/logic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/logic.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/logic.cpp" -o CMakeFiles/ex2.dir/logic.cpp.s

CMakeFiles/ex2.dir/logic.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/logic.cpp.o.requires

CMakeFiles/ex2.dir/logic.cpp.o.provides: CMakeFiles/ex2.dir/logic.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/logic.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/logic.cpp.o.provides

CMakeFiles/ex2.dir/logic.cpp.o.provides.build: CMakeFiles/ex2.dir/logic.cpp.o


CMakeFiles/ex2.dir/main.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ex2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/main.cpp.o -c "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/main.cpp"

CMakeFiles/ex2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/main.cpp" > CMakeFiles/ex2.dir/main.cpp.i

CMakeFiles/ex2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/main.cpp" -o CMakeFiles/ex2.dir/main.cpp.s

CMakeFiles/ex2.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/main.cpp.o.requires

CMakeFiles/ex2.dir/main.cpp.o.provides: CMakeFiles/ex2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/main.cpp.o.provides

CMakeFiles/ex2.dir/main.cpp.o.provides.build: CMakeFiles/ex2.dir/main.cpp.o


CMakeFiles/ex2.dir/regLogic.cpp.o: CMakeFiles/ex2.dir/flags.make
CMakeFiles/ex2.dir/regLogic.cpp.o: ../regLogic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ex2.dir/regLogic.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2.dir/regLogic.cpp.o -c "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/regLogic.cpp"

CMakeFiles/ex2.dir/regLogic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2.dir/regLogic.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/regLogic.cpp" > CMakeFiles/ex2.dir/regLogic.cpp.i

CMakeFiles/ex2.dir/regLogic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2.dir/regLogic.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/regLogic.cpp" -o CMakeFiles/ex2.dir/regLogic.cpp.s

CMakeFiles/ex2.dir/regLogic.cpp.o.requires:

.PHONY : CMakeFiles/ex2.dir/regLogic.cpp.o.requires

CMakeFiles/ex2.dir/regLogic.cpp.o.provides: CMakeFiles/ex2.dir/regLogic.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex2.dir/build.make CMakeFiles/ex2.dir/regLogic.cpp.o.provides.build
.PHONY : CMakeFiles/ex2.dir/regLogic.cpp.o.provides

CMakeFiles/ex2.dir/regLogic.cpp.o.provides.build: CMakeFiles/ex2.dir/regLogic.cpp.o


# Object files for target ex2
ex2_OBJECTS = \
"CMakeFiles/ex2.dir/board.cpp.o" \
"CMakeFiles/ex2.dir/cell.cpp.o" \
"CMakeFiles/ex2.dir/consoleDisplay.cpp.o" \
"CMakeFiles/ex2.dir/game.cpp.o" \
"CMakeFiles/ex2.dir/human.cpp.o" \
"CMakeFiles/ex2.dir/logic.cpp.o" \
"CMakeFiles/ex2.dir/main.cpp.o" \
"CMakeFiles/ex2.dir/regLogic.cpp.o"

# External object files for target ex2
ex2_EXTERNAL_OBJECTS =

ex2: CMakeFiles/ex2.dir/board.cpp.o
ex2: CMakeFiles/ex2.dir/cell.cpp.o
ex2: CMakeFiles/ex2.dir/consoleDisplay.cpp.o
ex2: CMakeFiles/ex2.dir/game.cpp.o
ex2: CMakeFiles/ex2.dir/human.cpp.o
ex2: CMakeFiles/ex2.dir/logic.cpp.o
ex2: CMakeFiles/ex2.dir/main.cpp.o
ex2: CMakeFiles/ex2.dir/regLogic.cpp.o
ex2: CMakeFiles/ex2.dir/build.make
ex2: CMakeFiles/ex2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable ex2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex2.dir/build: ex2

.PHONY : CMakeFiles/ex2.dir/build

CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/board.cpp.o.requires
CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/cell.cpp.o.requires
CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/consoleDisplay.cpp.o.requires
CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/game.cpp.o.requires
CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/human.cpp.o.requires
CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/logic.cpp.o.requires
CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/main.cpp.o.requires
CMakeFiles/ex2.dir/requires: CMakeFiles/ex2.dir/regLogic.cpp.o.requires

.PHONY : CMakeFiles/ex2.dir/requires

CMakeFiles/ex2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex2.dir/clean

CMakeFiles/ex2.dir/depend:
	cd "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2" "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2" "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug" "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug" "/home/omer/Desktop/לימודים/שנה ב/תכנות מתקדם 1/ex2/cmake-build-debug/CMakeFiles/ex2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ex2.dir/depend

