cmake_minimum_required(VERSION 3.10)
project(DEngine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/obj/)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/obj/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/)

add_subdirectory(engine)
add_subdirectory(platformer3D)

set(CMAKE_DEFAULT_STARTUP_PROJECT platformer3D)
