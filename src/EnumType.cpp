/*
 * EnumType.cpp
 * This file is to realize python binding of enum type case. 
 */

#include <pybind11/pybind11.h>
#include "EnumType.h"

namespace py = pybind11;

PYBIND11_MODULE(enum_type, m) {
  // Bind class: Pet
  py::class_<Pet> pet(m, "Pet");
  
  // Bind class members
  pet.def(py::init<const std::string &, Pet::Kind>())
    .def_readwrite("name", &Pet::name)
    .def_readwrite("type", &Pet::type);

  // Bind enum type: Kind
  py::enum_<Pet::Kind>(pet, "Kind")
    .value("Dog", Pet::Kind::Dog)
    .value("Cat", Pet::Kind::Cat)
    .export_values();
}