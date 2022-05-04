cmake_minimum_required(VERSION 3.9)
project(DEditor)

include_directories(../DEngine/src)
include_directories(../DEngine/vendor)
include_directories(../DEngine/vendor/glad/include)

file (GLOB_RECURSE EDITOR_HEADERS src/*.hpp
                                   src/*.h)
file (GLOB_RECURSE EDITOR_SOURCES src/*.cpp
                                   src/*.cxx
                                   src/*.cc
                                   src/*.c)
add_executable(${PROJECT_NAME} ${EDITOR_SOURCES} ${EDITOR_HEADERS})


target_link_libraries(${PROJECT_NAME} DEngine)
target_link_libraries(${PROJECT_NAME} glfw)

