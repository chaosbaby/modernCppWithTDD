project(chapterFirstExample)
cmake_minimum_required(VERSION 2.6)

set(sources
	main.cpp)

add_executable(test ${sources})
enable_testing()
find_package(GTest MODULE REQUIRED)
target_link_libraries(main PRIVATE GTest::GTest GTest::Main)
add_test(AllTestsInMain main)