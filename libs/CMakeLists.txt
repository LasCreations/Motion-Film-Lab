
file(GLOB WIDGET_SOURCE_FILES 
	"${CMAKE_CURRENT_SOURCE_DIR}/widgets/*.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/widgets/*.c"
)


file(GLOB FFMPEG_SOURCE_FILES 
        "${CMAKE_CURRENT_SOURCE_DIR}/FFmpeg/*.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/FFmpeg/*.c"
)

add_library(
    Widgets
    ${WIDGET_SOURCE_FILES}
    )

add_library(
        FFmpeg
        ${FFMPEG_SOURCE_FILES}
        )


target_include_directories(Widgets PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_include_directories(FFmpeg PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_compile_definitions(Widgets PRIVATE MFL_VERSION=1.1)
target_compile_definitions(FFmpeg PRIVATE MFL_VERSION=1.1)
