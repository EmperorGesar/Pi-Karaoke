# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /home/pi/Documents/cs3307/group59/project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi

# Include any dependencies generated for this target.
include CMakeFiles/karaoke.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/karaoke.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/karaoke.dir/flags.make

CMakeFiles/karaoke.dir/main.cpp.o: CMakeFiles/karaoke.dir/flags.make
CMakeFiles/karaoke.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/karaoke.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/karaoke.dir/main.cpp.o -c /home/pi/Documents/cs3307/group59/project/main.cpp

CMakeFiles/karaoke.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/karaoke.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Documents/cs3307/group59/project/main.cpp > CMakeFiles/karaoke.dir/main.cpp.i

CMakeFiles/karaoke.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/karaoke.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Documents/cs3307/group59/project/main.cpp -o CMakeFiles/karaoke.dir/main.cpp.s

CMakeFiles/karaoke.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/karaoke.dir/main.cpp.o.requires

CMakeFiles/karaoke.dir/main.cpp.o.provides: CMakeFiles/karaoke.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/karaoke.dir/build.make CMakeFiles/karaoke.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/karaoke.dir/main.cpp.o.provides

CMakeFiles/karaoke.dir/main.cpp.o.provides.build: CMakeFiles/karaoke.dir/main.cpp.o


CMakeFiles/karaoke.dir/mainwindow.cpp.o: CMakeFiles/karaoke.dir/flags.make
CMakeFiles/karaoke.dir/mainwindow.cpp.o: ../mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/karaoke.dir/mainwindow.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/karaoke.dir/mainwindow.cpp.o -c /home/pi/Documents/cs3307/group59/project/mainwindow.cpp

CMakeFiles/karaoke.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/karaoke.dir/mainwindow.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Documents/cs3307/group59/project/mainwindow.cpp > CMakeFiles/karaoke.dir/mainwindow.cpp.i

CMakeFiles/karaoke.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/karaoke.dir/mainwindow.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Documents/cs3307/group59/project/mainwindow.cpp -o CMakeFiles/karaoke.dir/mainwindow.cpp.s

CMakeFiles/karaoke.dir/mainwindow.cpp.o.requires:

.PHONY : CMakeFiles/karaoke.dir/mainwindow.cpp.o.requires

CMakeFiles/karaoke.dir/mainwindow.cpp.o.provides: CMakeFiles/karaoke.dir/mainwindow.cpp.o.requires
	$(MAKE) -f CMakeFiles/karaoke.dir/build.make CMakeFiles/karaoke.dir/mainwindow.cpp.o.provides.build
.PHONY : CMakeFiles/karaoke.dir/mainwindow.cpp.o.provides

CMakeFiles/karaoke.dir/mainwindow.cpp.o.provides.build: CMakeFiles/karaoke.dir/mainwindow.cpp.o


CMakeFiles/karaoke.dir/Lyric.cpp.o: CMakeFiles/karaoke.dir/flags.make
CMakeFiles/karaoke.dir/Lyric.cpp.o: ../Lyric.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/karaoke.dir/Lyric.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/karaoke.dir/Lyric.cpp.o -c /home/pi/Documents/cs3307/group59/project/Lyric.cpp

CMakeFiles/karaoke.dir/Lyric.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/karaoke.dir/Lyric.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Documents/cs3307/group59/project/Lyric.cpp > CMakeFiles/karaoke.dir/Lyric.cpp.i

CMakeFiles/karaoke.dir/Lyric.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/karaoke.dir/Lyric.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Documents/cs3307/group59/project/Lyric.cpp -o CMakeFiles/karaoke.dir/Lyric.cpp.s

CMakeFiles/karaoke.dir/Lyric.cpp.o.requires:

.PHONY : CMakeFiles/karaoke.dir/Lyric.cpp.o.requires

CMakeFiles/karaoke.dir/Lyric.cpp.o.provides: CMakeFiles/karaoke.dir/Lyric.cpp.o.requires
	$(MAKE) -f CMakeFiles/karaoke.dir/build.make CMakeFiles/karaoke.dir/Lyric.cpp.o.provides.build
.PHONY : CMakeFiles/karaoke.dir/Lyric.cpp.o.provides

CMakeFiles/karaoke.dir/Lyric.cpp.o.provides.build: CMakeFiles/karaoke.dir/Lyric.cpp.o


CMakeFiles/karaoke.dir/Song.cpp.o: CMakeFiles/karaoke.dir/flags.make
CMakeFiles/karaoke.dir/Song.cpp.o: ../Song.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/karaoke.dir/Song.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/karaoke.dir/Song.cpp.o -c /home/pi/Documents/cs3307/group59/project/Song.cpp

CMakeFiles/karaoke.dir/Song.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/karaoke.dir/Song.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Documents/cs3307/group59/project/Song.cpp > CMakeFiles/karaoke.dir/Song.cpp.i

CMakeFiles/karaoke.dir/Song.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/karaoke.dir/Song.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Documents/cs3307/group59/project/Song.cpp -o CMakeFiles/karaoke.dir/Song.cpp.s

CMakeFiles/karaoke.dir/Song.cpp.o.requires:

.PHONY : CMakeFiles/karaoke.dir/Song.cpp.o.requires

CMakeFiles/karaoke.dir/Song.cpp.o.provides: CMakeFiles/karaoke.dir/Song.cpp.o.requires
	$(MAKE) -f CMakeFiles/karaoke.dir/build.make CMakeFiles/karaoke.dir/Song.cpp.o.provides.build
.PHONY : CMakeFiles/karaoke.dir/Song.cpp.o.provides

CMakeFiles/karaoke.dir/Song.cpp.o.provides.build: CMakeFiles/karaoke.dir/Song.cpp.o


CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o: CMakeFiles/karaoke.dir/flags.make
CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o: karaoke_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o -c /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/karaoke_automoc.cpp

CMakeFiles/karaoke.dir/karaoke_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/karaoke.dir/karaoke_automoc.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/karaoke_automoc.cpp > CMakeFiles/karaoke.dir/karaoke_automoc.cpp.i

CMakeFiles/karaoke.dir/karaoke_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/karaoke.dir/karaoke_automoc.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/karaoke_automoc.cpp -o CMakeFiles/karaoke.dir/karaoke_automoc.cpp.s

CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o.requires:

.PHONY : CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o.requires

CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o.provides: CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o.requires
	$(MAKE) -f CMakeFiles/karaoke.dir/build.make CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o.provides.build
.PHONY : CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o.provides

CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o.provides.build: CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o


# Object files for target karaoke
karaoke_OBJECTS = \
"CMakeFiles/karaoke.dir/main.cpp.o" \
"CMakeFiles/karaoke.dir/mainwindow.cpp.o" \
"CMakeFiles/karaoke.dir/Lyric.cpp.o" \
"CMakeFiles/karaoke.dir/Song.cpp.o" \
"CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o"

# External object files for target karaoke
karaoke_EXTERNAL_OBJECTS =

karaoke: CMakeFiles/karaoke.dir/main.cpp.o
karaoke: CMakeFiles/karaoke.dir/mainwindow.cpp.o
karaoke: CMakeFiles/karaoke.dir/Lyric.cpp.o
karaoke: CMakeFiles/karaoke.dir/Song.cpp.o
karaoke: CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o
karaoke: CMakeFiles/karaoke.dir/build.make
karaoke: /usr/lib/arm-linux-gnueabihf/libQt5Widgets.so.5.7.1
karaoke: /usr/lib/arm-linux-gnueabihf/libQt5Multimedia.so.5.7.1
karaoke: /usr/lib/arm-linux-gnueabihf/libQt5Gui.so.5.7.1
karaoke: /usr/lib/arm-linux-gnueabihf/libQt5Network.so.5.7.1
karaoke: /usr/lib/arm-linux-gnueabihf/libQt5Core.so.5.7.1
karaoke: CMakeFiles/karaoke.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable karaoke"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/karaoke.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/karaoke.dir/build: karaoke

.PHONY : CMakeFiles/karaoke.dir/build

CMakeFiles/karaoke.dir/requires: CMakeFiles/karaoke.dir/main.cpp.o.requires
CMakeFiles/karaoke.dir/requires: CMakeFiles/karaoke.dir/mainwindow.cpp.o.requires
CMakeFiles/karaoke.dir/requires: CMakeFiles/karaoke.dir/Lyric.cpp.o.requires
CMakeFiles/karaoke.dir/requires: CMakeFiles/karaoke.dir/Song.cpp.o.requires
CMakeFiles/karaoke.dir/requires: CMakeFiles/karaoke.dir/karaoke_automoc.cpp.o.requires

.PHONY : CMakeFiles/karaoke.dir/requires

CMakeFiles/karaoke.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/karaoke.dir/cmake_clean.cmake
.PHONY : CMakeFiles/karaoke.dir/clean

CMakeFiles/karaoke.dir/depend:
	cd /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/Documents/cs3307/group59/project /home/pi/Documents/cs3307/group59/project /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/CMakeFiles/karaoke.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/karaoke.dir/depend

