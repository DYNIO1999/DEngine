cmake_minimum_required(VERSION 3.9)
project(DEngine)

include_directories (vendor/glad/include/
                     vendor/glfw/include/
                     vendor/spdlog/include/
                     )

file (GLOB_RECURSE ENGINE_HEADERS src/*.hpp
                                   src/*.h)
file (GLOB_RECURSE ENGINE_SOURCES src/*.cpp
                                   src/*.cxx
                                   src/*.cc
                                   src/*.c)

file (GLOB         GLAD_SOURCES  vendor/glad/src/glad.c)


add_library(${PROJECT_NAME} STATIC ${ENGINE_SOURCES} ${ENGINE_HEADERS} ${GLAD_SOURCES})

target_link_libraries(${PROJECT_NAME}
                       glfw
                       ${GLFW_LIBRARIES}
                       ${GLAD_LIBRARIES})