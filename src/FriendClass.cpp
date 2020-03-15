/*
 * FriendClass.cpp
 * This file is to realize python binding of friend class case.
 * There is no need to add any extra operation for the friend class.
 */

#include <pybind11/pybind11.h>
#include "FriendClass.h"

namespace py = pybind11;

PYBIND11_MODULE(friend_class, m) {
  // Bind class: Rectangle
  py::class_<Rectangle>(m, "Rectangle")
    .def(py::init<>());
  // Bind class: Square
  py::class_<Square>(m, "Square")
    .def(py::init<>())
    .def("Display", &Square::Display);
}
