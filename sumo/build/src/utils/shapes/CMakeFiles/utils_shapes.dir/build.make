# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aniket/Documents/workspace/msvanet/sumo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aniket/Documents/workspace/msvanet/sumo/build

# Include any dependencies generated for this target.
include src/utils/shapes/CMakeFiles/utils_shapes.dir/depend.make

# Include the progress variables for this target.
include src/utils/shapes/CMakeFiles/utils_shapes.dir/progress.make

# Include the compile flags for this target's objects.
include src/utils/shapes/CMakeFiles/utils_shapes.dir/flags.make

src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o: src/utils/shapes/CMakeFiles/utils_shapes.dir/flags.make
src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o: ../src/utils/shapes/Shape.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aniket/Documents/workspace/msvanet/sumo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/utils_shapes.dir/Shape.cpp.o -c /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/Shape.cpp

src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils_shapes.dir/Shape.cpp.i"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/Shape.cpp > CMakeFiles/utils_shapes.dir/Shape.cpp.i

src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils_shapes.dir/Shape.cpp.s"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/Shape.cpp -o CMakeFiles/utils_shapes.dir/Shape.cpp.s

src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o.requires:

.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o.requires

src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o.provides: src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o.requires
	$(MAKE) -f src/utils/shapes/CMakeFiles/utils_shapes.dir/build.make src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o.provides.build
.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o.provides

src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o.provides.build: src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o


src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o: src/utils/shapes/CMakeFiles/utils_shapes.dir/flags.make
src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o: ../src/utils/shapes/SUMOPolygon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aniket/Documents/workspace/msvanet/sumo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o -c /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/SUMOPolygon.cpp

src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.i"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/SUMOPolygon.cpp > CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.i

src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.s"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/SUMOPolygon.cpp -o CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.s

src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o.requires:

.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o.requires

src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o.provides: src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o.requires
	$(MAKE) -f src/utils/shapes/CMakeFiles/utils_shapes.dir/build.make src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o.provides.build
.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o.provides

src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o.provides.build: src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o


src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o: src/utils/shapes/CMakeFiles/utils_shapes.dir/flags.make
src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o: ../src/utils/shapes/PolygonDynamics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aniket/Documents/workspace/msvanet/sumo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o -c /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/PolygonDynamics.cpp

src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.i"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/PolygonDynamics.cpp > CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.i

src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.s"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/PolygonDynamics.cpp -o CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.s

src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o.requires:

.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o.requires

src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o.provides: src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o.requires
	$(MAKE) -f src/utils/shapes/CMakeFiles/utils_shapes.dir/build.make src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o.provides.build
.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o.provides

src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o.provides.build: src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o


src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o: src/utils/shapes/CMakeFiles/utils_shapes.dir/flags.make
src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o: ../src/utils/shapes/ShapeHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aniket/Documents/workspace/msvanet/sumo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o -c /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/ShapeHandler.cpp

src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.i"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/ShapeHandler.cpp > CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.i

src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.s"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/ShapeHandler.cpp -o CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.s

src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o.requires:

.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o.requires

src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o.provides: src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o.requires
	$(MAKE) -f src/utils/shapes/CMakeFiles/utils_shapes.dir/build.make src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o.provides.build
.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o.provides

src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o.provides.build: src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o


src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o: src/utils/shapes/CMakeFiles/utils_shapes.dir/flags.make
src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o: ../src/utils/shapes/ShapeContainer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aniket/Documents/workspace/msvanet/sumo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o -c /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/ShapeContainer.cpp

src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.i"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/ShapeContainer.cpp > CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.i

src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.s"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes/ShapeContainer.cpp -o CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.s

src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o.requires:

.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o.requires

src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o.provides: src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o.requires
	$(MAKE) -f src/utils/shapes/CMakeFiles/utils_shapes.dir/build.make src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o.provides.build
.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o.provides

src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o.provides.build: src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o


# Object files for target utils_shapes
utils_shapes_OBJECTS = \
"CMakeFiles/utils_shapes.dir/Shape.cpp.o" \
"CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o" \
"CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o" \
"CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o" \
"CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o"

# External object files for target utils_shapes
utils_shapes_EXTERNAL_OBJECTS =

src/utils/shapes/libutils_shapes.a: src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o
src/utils/shapes/libutils_shapes.a: src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o
src/utils/shapes/libutils_shapes.a: src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o
src/utils/shapes/libutils_shapes.a: src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o
src/utils/shapes/libutils_shapes.a: src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o
src/utils/shapes/libutils_shapes.a: src/utils/shapes/CMakeFiles/utils_shapes.dir/build.make
src/utils/shapes/libutils_shapes.a: src/utils/shapes/CMakeFiles/utils_shapes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aniket/Documents/workspace/msvanet/sumo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libutils_shapes.a"
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && $(CMAKE_COMMAND) -P CMakeFiles/utils_shapes.dir/cmake_clean_target.cmake
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/utils_shapes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/utils/shapes/CMakeFiles/utils_shapes.dir/build: src/utils/shapes/libutils_shapes.a

.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/build

src/utils/shapes/CMakeFiles/utils_shapes.dir/requires: src/utils/shapes/CMakeFiles/utils_shapes.dir/Shape.cpp.o.requires
src/utils/shapes/CMakeFiles/utils_shapes.dir/requires: src/utils/shapes/CMakeFiles/utils_shapes.dir/SUMOPolygon.cpp.o.requires
src/utils/shapes/CMakeFiles/utils_shapes.dir/requires: src/utils/shapes/CMakeFiles/utils_shapes.dir/PolygonDynamics.cpp.o.requires
src/utils/shapes/CMakeFiles/utils_shapes.dir/requires: src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeHandler.cpp.o.requires
src/utils/shapes/CMakeFiles/utils_shapes.dir/requires: src/utils/shapes/CMakeFiles/utils_shapes.dir/ShapeContainer.cpp.o.requires

.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/requires

src/utils/shapes/CMakeFiles/utils_shapes.dir/clean:
	cd /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes && $(CMAKE_COMMAND) -P CMakeFiles/utils_shapes.dir/cmake_clean.cmake
.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/clean

src/utils/shapes/CMakeFiles/utils_shapes.dir/depend:
	cd /home/aniket/Documents/workspace/msvanet/sumo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aniket/Documents/workspace/msvanet/sumo /home/aniket/Documents/workspace/msvanet/sumo/src/utils/shapes /home/aniket/Documents/workspace/msvanet/sumo/build /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes /home/aniket/Documents/workspace/msvanet/sumo/build/src/utils/shapes/CMakeFiles/utils_shapes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/utils/shapes/CMakeFiles/utils_shapes.dir/depend

