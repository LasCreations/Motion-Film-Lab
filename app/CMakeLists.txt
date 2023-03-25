add_executable(${PROJECT_NAME} main.c)


find_library(MATH_LIBRARY m)
if(MATH_LIBRARY)
	target_link_libraries(${PROJECT_NAME} PUBLIC ${MATH_LIBRARY})
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE Widgets FFmpeg Sys SDLSTATICLIB ${GTK_LIBRARIES} ${SDL2_LIBRARIES} 
			${GSTREAMER_LIBRARIES} ${AVCODEC_LIBRARY} ${AVFORMAT_LIBRARY}
			${AVUTIL_LIBRARY} ${AVDEVICE_LIBRARY} ${CMAKE_THREAD_LIBS_INIT} -lavfilter -lpostproc 
			-lavcodec -lm -lswresample -lz -lswscale -lavutil -lx264)

		#-lavformat -lXv -lX11 -lXext -ldl -lvdpau -lva -lva-x11 -lX11 -lva -lva-drm -lva -lxcb -lxcb-shm -lxcb -lxcb-xfixes -lxcb-render -lxcb-shape -lxcb -lxcb-shape -lxcb -lsndio -ljack -lasound -lSDL2 -lx264 -lcrystalhd -lm -llzma -lbz2 -lz -pthread -lavcodec -lXv -lX11 -lXext -ldl -lvdpau -lva -lva-x11 -lX11 -lva -lva-drm -lva -lxcb -lxcb-shm -lxcb -lxcb-xfixes -lxcb-render -lxcb-shape -lxcb -lxcb-shape -lxcb -lsndio -ljack -lasound -lSDL2 -lx264 -lcrystalhd -lm -llzma -lbz2 -lz -pthread -lswresample -lm -lavutil -lm

target_include_directories(
			${PROJECT_NAME} PRIVATE ${AVCODEC_INCLUDE_DIR}
			${AVFORMAT_INCLUDE_DIR} ${AVUTIL_INCLUDE_DIR}
			${AVDEVICE_INCLUDE_DIR}
		)
	
INSTALL (TARGETS ${PROJECT_NAME})  
