/*
 * TemplateInheritance.cpp
 * This file is to realize python binding of template inheritance case.
 * All the base class constructor and useful functions should be bound.
 * All the class template should be specified.
 */

#include <pybind11/pybind11.h>
#include "TemplateInheritance.h"

namespace py = pybind11;

PYBIND11_MODULE(template_inheritance, m) {
  // Bind base class template: Shape
  py::class_<Shape<int>>(m, "Shape")
    .def(py::init<>())
    .def("setWidth", &Shape<int>::setWidth)
    .def("setHeight", &Shape<int>::setHeight);

  // Bind base class template: PaintCost
  py::class_<PaintCost<int>>(m, "PaintCost")
    .def(py::init<>())
    .def("getCost", &PaintCost<int>::getCost);

  // Bind derived class: Rectangle
  py::class_<Rectangle, Shape<int>, PaintCost<int>>(m, "Rectangle")
    .def(py::init<>())
    .def("getArea", &Rectangle::getArea);
}