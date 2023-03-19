cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-O3 -Wall")


if(NOT DEFINED MFL_VERSION)
  string(TIMESTAMP MFL_VERSION "%y.%m.%d")
endif()

project(MFL
	VERSION ${MFL_VERSION}
	LANGUAGES C 
	DESCRIPTION "Open-Source GUI Video Editor"
)

FIND_PACKAGE(PkgConfig REQUIRED)
FIND_PACKAGE(SDL2 REQUIRED)

find_path(AVCODEC_INCLUDE_DIR libavcodec/avcodec.h)
find_library(AVCODEC_LIBRARY avcodec)

find_path(AVFORMAT_INCLUDE_DIR libavformat/avformat.h)
find_library(AVFORMAT_LIBRARY avformat)

find_path(AVUTIL_INCLUDE_DIR libavutil/avutil.h)
find_library(AVUTIL_LIBRARY avutil)

find_path(AVDEVICE_INCLUDE_DIR libavdevice/avdevice.h)
find_library(AVDEVICE_LIBRARY avdevice)

PKG_CHECK_MODULES(GTK REQUIRED gtk+-3.0)
pkg_check_modules(GSTREAMER REQUIRED gstreamer-1.0 gstreamer-video-1.0 gstreamer-audio-1.0)

include_directories(
			${PROJECT_SOURCE_DIR}/libs ${GTK_INCLUDE_DIRS}
			${SDL2_INCLUDE_DIRS} ${GLIB_INCLUDE_DIRS} ${GSTREAMER_INCLUDE_DIRS}
		)

ADD_DEFINITIONS(${GTK_CFLAGS_OTHER})

LINK_DIRECTORIES(${GTK_LIBRARY_DIRS})
LINK_DIRECTORIES(${SDL2_INCLUDE_DIRS})
link_directories(${GLIB_LIBRARY_DIRS} ${GSTREAMER_LIBRARY_DIRS})

add_subdirectory(libs)
add_subdirectory(app)

INSTALL (TARGETS ${PROJECT_NAME} DESTINATION build/app)
