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

# Utility rule file for karaoke_automoc.

# Include the progress variables for this target.
include CMakeFiles/karaoke_automoc.dir/progress.make

CMakeFiles/karaoke_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc, uic and rcc for target karaoke"
	/usr/bin/cmake -E cmake_autogen /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/CMakeFiles/karaoke_automoc.dir/ Debug

karaoke_automoc: CMakeFiles/karaoke_automoc
karaoke_automoc: CMakeFiles/karaoke_automoc.dir/build.make

.PHONY : karaoke_automoc

# Rule to build all files generated by this target.
CMakeFiles/karaoke_automoc.dir/build: karaoke_automoc

.PHONY : CMakeFiles/karaoke_automoc.dir/build

CMakeFiles/karaoke_automoc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/karaoke_automoc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/karaoke_automoc.dir/clean

CMakeFiles/karaoke_automoc.dir/depend:
	cd /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/Documents/cs3307/group59/project /home/pi/Documents/cs3307/group59/project /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi /home/pi/Documents/cs3307/group59/project/cmake-build-debug-pi/CMakeFiles/karaoke_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/karaoke_automoc.dir/depend

