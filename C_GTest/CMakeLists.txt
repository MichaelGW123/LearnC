cmake_minimum_required(VERSION 3.10)
project(my_project)

add_subdirectory(test)

# Change the following line from add_executable to add_library
add_library(my_project_library src/my_function.c)
