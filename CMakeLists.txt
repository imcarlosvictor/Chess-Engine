#Project name
project(chess)

cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

add_executable(${PROJECT_NAME} src/main.cpp)

# Linking SDL2 library with our project
INCLUDE(FindPkgConfig)

PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
# PKG_SEARCH_MODULE(SDL2IMAGE REQUIRED SDL2_image>=2.0.0)

INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS} /usr/lib/x86_64-linux-gnu/pkgconfig/sdl2.pc)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${SDL2_LIBRARIES})