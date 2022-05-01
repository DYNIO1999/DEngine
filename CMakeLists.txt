cmake_minimum_required(VERSION 3.9)
project(DPHYSIC_ENGINE)


set (CMAKE_CXX_STANDARD 20)

option (GLFW_INSTALL OFF)
option (GLFW_BUILD_DOCS OFF)
option (GLFW_BUILD_EXAMPLES OFF)
option (GLFW_BUILD_TESTS OFF)
add_subdirectory (vendor/glfw)
add_subdirectory (DMathLib)
add_subdirectory (DPhysicLib)


if (UNIX)
option(USE_CLANG "build application with clang" ON) # OFF is the default
if(USE_CLANG)
    message(STATUS "SET CLANG COMPILER!") 
    SET (CMAKE_C_COMPILER /usr/bin/clang)
    SET (CMAKE_CXX_COMPILER /usr/bin/clang++)
endif(USE_CLANG)
endif (UNIX)

add_compile_options(-fdiagnostics-color=always)



include_directories (src/
                     vendor/glad/include/
                     vendor/glfw/include/
#                     vendor/glm/include/glm
                     )
file (GLOB         GLAD_SOURCES vendor/glad/src/glad.c)
file (GLOB_RECURSE PROJECT_HEADERS src/*.hpp
                                   src/*.h)
file (GLOB_RECURSE PROJECT_SOURCES src/*.cpp
                                   src/*.cxx
                                   src/*.cc
                                   src/*.c)

add_compile_options(-Wall)

add_definitions (-DGLFW_INCLUDE_NONE
                 -DPROJECT_SOURCE_DIR=\"${PROJECT_SOURCE_DIR}\")
add_executable (${PROJECT_NAME} ${PROJECT_SOURCES} ${PROJECT_HEADERS} ${GLAD_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC DMath DPhysic)
target_link_directories(${PROJECT_NAME} PUBLIC DMath DPhysic)

target_link_libraries (${PROJECT_NAME}
                       glfw
                       ${GLFW_LIBRARIES}
                       ${GLAD_LIBRARIES}
                       DMath
                       DPhysic
                       )

set_target_properties (${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME})