cmake_minimum_required(VERSION 2.8.12)
project(test)

# Two methods of using pybind11
# add_subdirectory(pybind11)
find_package(pybind11)

pybind11_add_module(func_template src/FuncTemplate.cpp)
pybind11_add_module(multi_inheritance src/MultiInheritance.cpp)
