cmake_minimum_required(VERSION 3.7.2)
project(karaoke)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC on)
set(CMAKE_AUTOUIC on)
set(CMAKE_AUTORCC on)
set(CMAKE_INCLUDE_CURRENT_DIR on)

find_package(Qt5 COMPONENTS Widgets Core Gui Multimedia)

add_executable(karaoke main.cpp mainwindow.cpp Lyric.cpp Lyric.h Song.cpp Song.h)
target_link_libraries(karaoke Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Multimedia ${CMAKE_DL_LIBS} )