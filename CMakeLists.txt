cmake_minimum_required(VERSION 3.22.1)
set(CMAKE_BUILD_TYPE Debug)

# C++14 Standard
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

#Project name
project(game)

add_executable(game 
	main.cpp
	Window/window.cpp
)

# Dependencies
INCLUDE(FindPkgConfig)

#Searching SDL2 package
PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)

# Including out external library's directory for hedder files
INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS})

# Linking SDL2 library with our project
target_link_libraries(game ${SDL2_LIBRARIES})
