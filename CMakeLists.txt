# Minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(E-Shop)

# Source files
add_executable(
# Executable
    E-Shop

# Entry Point
    App.cpp

# Headers
    src/headers/Person.hpp
)

# Link Necessery library
# target_link_libraries(E-Shop sqlite3)