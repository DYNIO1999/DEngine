cmake_minimum_required(VERSION 3.9)
project(Sandbox)

include_directories(../DEngine/src)
include_directories(../DEngine/vendor)
include_directories(../DEngine/vendor/glad/include)


file (GLOB_RECURSE SANDBOX_HEADERS src/*.hpp
                                   src/*.h)
file (GLOB_RECURSE SANDBOX_SOURCES src/*.cpp
                                   src/*.cxx
                                   src/*.cc
                                   src/*.c)
add_executable(${PROJECT_NAME} ${SANDBOX_SOURCES} ${SANDBOX_HEADERS} )


target_link_libraries(${PROJECT_NAME} DEngine)
target_link_libraries(${PROJECT_NAME} glfw)
target_link_libraries(${PROJECT_NAME} ${CMAKE_DL_LIBS})


