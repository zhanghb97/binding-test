cmake_minimum_required(VERSION 2.8.12)
project(test)

# Two methods of using pybind11
# add_subdirectory(pybind11)
find_package(pybind11)

pybind11_add_module(func_template src/FuncTemplate.cpp)
pybind11_add_module(multi_inheritance src/MultiInheritance.cpp)
pybind11_add_module(class_template src/ClassTemplate.cpp)
pybind11_add_module(template_inheritance src/TemplateInheritance.cpp)
pybind11_add_module(static_property src/StaticProperty.cpp)
pybind11_add_module(return_pointer src/ReturnPointer.cpp)
pybind11_add_module(enum_type src/EnumType.cpp)
pybind11_add_module(friend_class src/FriendClass.cpp)
