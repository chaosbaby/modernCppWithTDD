project(chapterFirstExample)
cmake_minimum_required(VERSION 2.6)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})
include(FindGMock)

set(sources
	main.cpp)

add_executable(test ${sources})

find_package(GMock REQUIRED GMock::GMock GMock::Main)

#message("GMOCK_INCLUDE_DIRS="${GMOCK_INCLUDE_DIRS})
target_include_directories(test
	PRIVATE
	${GMOCK_INCLUDE_DIRS})

target_link_libraries(test
	PRIVATE
	${GMOCK_LIBRARIES})