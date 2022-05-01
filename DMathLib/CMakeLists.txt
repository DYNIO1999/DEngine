file (GLOB_RECURSE DMATH_HEADERS include/*.hpp
                                 include/*.h)
file (GLOB_RECURSE DMATH_SOURCES source/*.cpp
                                 source/*.cxx
                                 source/*.cc
                                 source/*.c)

add_library(DMath ${DMATH_SOURCES} ${DMATH_HEADERS})

