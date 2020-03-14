/*
 * StaticProperty.cpp
 * This file is to realize python binding of static property case.
 * Static member can be bound using def_property_readonly_static
 * Static member function can be bound using def_static
 */

#include <pybind11/pybind11.h>
#include "StaticProperty.h"

namespace py = pybind11;

PYBIND11_MODULE(static_property, m) {
  // Bind class: Box
  py::class_<Box>(m, "Box")
    .def(py::init<double, double, double>())
    // Bind static member
    .def_property_readonly_static("objectCount", []() { return Box::objectCount; })
    .def("Volume", &Box::Volume)
    // Bind static member function
    .def_static("getCount", &Box::getCount);
}
  