project(chapterFirstExample)
cmake_minimum_required(VERSION 2.6)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})
include(FindGMock)

set(sources	
	main.cpp
	SoundexTest.cpp
	)

add_executable(test ${sources})
target_compile_definitions( test PRIVATE -DGTEST_LINKED_AS_SHARED_LIBRARY=1 )

find_package(GMock REQUIRED GMock::GMock GMock::Main)
find_package(GTest REQUIRED GTest::GTest GTest::Main)

#message("GMOCK_INCLUDE_DIRS="${GMOCK_INCLUDE_DIRS})
target_include_directories(test
	PRIVATE
	${GMOCK_INCLUDE_DIRS}
	${GTEST_INCLUDE_DIRS})

target_link_libraries(test
	PRIVATE
	${GMOCK_LIBRARIES}
	${GMOCK_MAIN_LIBRARIES}
	${GTEST_LIBRARIES}
	${GTEST_MAIN_LIBRARIES})