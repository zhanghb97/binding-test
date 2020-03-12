/*
 * MultiInheritance.cpp
 * This file is to realize python binding of multiple inheritance case.
 * All the base class constructor and useful functions should be bound. 
 */

#include <pybind11/pybind11.h>
#include "MultiInheritance.h"

namespace py = pybind11;

PYBIND11_MODULE(multi_inheritance, m) {
  // Bind base class: Shape
  py::class_<Shape>(m, "Shape")
    .def(py::init<>())
    .def("setWidth", &Shape::setWidth)
    .def("setHeight", &Shape::setHeight);

  // Bind base class: PaintCost
  py::class_<PaintCost>(m, "PaintCost")
    .def(py::init<>())
    .def("getCost", &PaintCost::getCost);

  // Bind derived class: Rectangle
  py::class_<Rectangle, Shape, PaintCost>(m, "Rectangle")
    .def(py::init<>())
    .def("getArea", &Rectangle::getArea);
}