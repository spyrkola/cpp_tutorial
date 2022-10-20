# CMakeLists.txt

cmake_minimum_required(VERSION 3.17)

project(cpp_tutorial)

add_executable(main src/main.cpp)
target_include_directories(main PRIVATE include/)

install(TARGETS main
	RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin
)
