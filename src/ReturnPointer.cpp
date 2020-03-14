/*
 * ReturnPointer.cpp
 * This file is to realize python binding of return pointer case.
 * The return pointer will be handled automatically by pybind11.
 */

#include <pybind11/pybind11.h>
#include "ReturnPointer.h"

namespace py = pybind11;

PYBIND11_MODULE(return_pointer, m) {
  // Bind class: Box
  py::class_<Box>(m, "Box")
    .def(py::init<>())
    // Bind static member
    .def_property_readonly_static("objectCount", []() { return Box::objectCount; })
    .def_static("create", &Box::create)
    .def("Volume", &Box::Volume)
    // Bind static member function
    .def_static("getCount", &Box::getCount);
}
  