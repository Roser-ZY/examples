cmake_minimum_required(VERSION 3.22)
project(sort VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(sort
	SHARED
	"quick_sort.cpp"
	"insert_sort.cpp"
	"shell_sort.cpp"
	)

add_executable(verify_correctness
	"verify/verify_correctness.cpp"
	)
target_include_directories(verify_correctness
	PRIVATE
	"./"
	)
target_link_libraries(verify_correctness
	PRIVATE
	sort
	)
