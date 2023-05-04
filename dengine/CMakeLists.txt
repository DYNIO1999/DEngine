
set(DENGINE_PROJECT "dengine")
project (dengine)

file (GLOB_RECURSE DENGINE_CORE_FILES
    "source/*.h"
    "source/*.cpp"
)

add_library(${DENGINE_PROJECT} SHARED
    ${DENGINE_CORE_FILES}
)

target_include_directories(${DENGINE_PROJECT} PRIVATE
    "${PROJECT_SOURCE_DIR}/source"

)

#target_link_directories(${DENGINE_PROJECT}PRIVATE
#    ${MOTUS_VULKAN_SDK_LIBRARY_DIR}
#)

#target_link_libraries(${${DENGINE_PROJECT}} PRIVATE
#    glfw
#    Visus
#    vulkan-1.lib
#)