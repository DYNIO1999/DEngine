file (GLOB_RECURSE DPHYSIC_HEADERS include/*.hpp
                                   include/*.h)
file (GLOB_RECURSE DPHYSIC_SOURCES source/*.cpp
                                   source/*.cxx
                                   source/*.cc
                                   source/*.c)

add_library(DPhysic ${DPHYSIC_SOURCES} ${DPHYSIC_HEADERS})
