cmake_minimum_required(VERSION 3.22)
project(sort VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(quick_sort
		"quick_sort.cpp"
	)
