cmake_minimum_required(VERSION 3.22.1)
set(CMAKE_BUILD_TYPE Debug)

# C++14 Standard
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

#Project name
project(game)

add_executable(game 
	src/main.cpp
	src/window.cpp
	src/board.cpp
	src/pieces.cpp
	)

# Dependencies
INCLUDE(FindPkgConfig)
find_package(SDL2 REQUIRED)
# Including out external library's directory for hedder files
INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS})

#Searching SDL2 package
PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)

# Linking SDL2 library with our project
target_link_libraries(game ${SDL2_LIBRARIES})
target_include_directories(game PUBLIC "${}" ${})
# add_subdirectory(/home/lucas/code/projects/Chess_Engine/CMakeLists.txt)

