# Minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(E-Shop)

# Source files
add_executable(E-Shop App.cpp src/headers/Person.hpp)

# Link Necessery library
# target_link_libraries(E-Shop sqlite3)