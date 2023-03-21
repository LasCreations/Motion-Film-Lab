
file(GLOB WIDGET_SOURCE_FILES 
	"${CMAKE_CURRENT_SOURCE_DIR}/widgets/*.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/widgets/*.c"
)


file(GLOB FFMPEG_SOURCE_FILES 
        "${CMAKE_CURRENT_SOURCE_DIR}/FFmpeg/*.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/FFmpeg/*.c"
)


file(GLOB SYSTEM_SOURCE_FILES 
        "${CMAKE_CURRENT_SOURCE_DIR}/sys/*.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/sys/*.c"
)

file(GLOB SDL2_SOURCE_FILES 
        "${CMAKE_CURRENT_SOURCE_DIR}/SDLLIB/*.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/SDLLIB/*.c"
)

add_library(
    Widgets
    ${WIDGET_SOURCE_FILES}
    )

add_library(
        FFmpeg
        ${FFMPEG_SOURCE_FILES}
        )

add_library(
        Sys
        ${SYSTEM_SOURCE_FILES}
        )

add_library(
        SDLSTATICLIB
        ${SDL2_SOURCE_FILES}
        )

target_include_directories(Widgets PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_include_directories(FFmpeg PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_include_directories(Sys PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_include_directories(SDLSTATICLIB PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_compile_definitions(Widgets PRIVATE MFL_VERSION=1.1)
target_compile_definitions(FFmpeg PRIVATE MFL_VERSION=1.1)
target_compile_definitions(Sys PRIVATE MFL_VERSION=1.1)
target_compile_definitions(SDLSTATICLIB PRIVATE MFL_VERSION=1.1)
