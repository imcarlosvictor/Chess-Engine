##Project name
#project(chess)

#cmake_minimum_required(VERSION 3.22.1)

#find_package(SDL2 REQUIRED)
#include_directories(${SDL2_INCLUDE_DIRS})

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

#add_executable(${PROJECT_NAME} src/main.cpp)

#target_link_libraries(${project_name} ${SDL2_LIBRARIES})
#target_include_directories(${project_name} PUBLIC ${SDL2_INCLUDE_DIRS})
#target_compile_options(${project_name} PUBLIC ${SDL2_CFLAGS_OTHER})
## # Linking SDL2 library with our project
## INCLUDE(FindPkgConfig)

## PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
## PKG_SEARCH_MODULE(SDL2IMAGE REQUIRED SDL2_image>=2.0.0)

#INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS} /usr/lib/x86_64-linux-gnu/pkgconfig/sdl2.pc)
## TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${SDL2_LIBRARIES})

# -------------------------
# cmake_minimum_required(VERSION 3.14)
# project(chess)

# # the `pkg_check_modules` function is created with this call
# find_package(SDL2 REQUIRED)

# # these calls create special `PkgConfig::<MODULE>` variables
# pkg_check_modules(SDL2 REQUIRED IMPORTED_TARGET sdl2main)

# add_executable(chess src/main.cpp)

# target_link_libraries(chess PUBLIC
#         PkgConfig::SDL2
#         PkgConfig::sdl2main)

# ------------------------------
# cmake_minimum_required(VERSION 3.14)
# project(chessengine)

# # Add source files
# file(GLOB_RECURSE SOURCE_FILE
#         ${CMAKE_SOURCE_DIR}/src/*.cpp)

# # Add header files
# file(GLOB_RECURSE HEADER_FILES
#         ${CMAKE_SOURCE_DIR}/include/*.h)

# link_directories(${CMAKE_SOURCE_DIR}/lib)
# find_package(SDL2 REQUIRED)
# include_directories(
#         "${CMAKE_SOURCE_DIR}/src"
#         "${CMAKE_SOURCE_DIR}/include")

# add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES})

#------------------------------------
cmake_minimum_required(VERSION 3.7)
project(chessEngine)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(SDL2 REQUIRED)
# link_libraries(${PROJECT_NAME} SDL2::Main SDL2::Image SDL2::GFX)
# include_directories(${SDL2_INCLUDE_DIRS})

set(SOURCE_FILES
        src/main.cpp
        )

include_directories(src)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
# target_link_directories(${PROJECT_NAME} SDL2::Main SDL2::Net SDL2::Mixer SDL2::Image SDL2::TTF SDL2::GFX)