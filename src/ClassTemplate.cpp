/*
 * ClassTemplate.cpp
 * This file is to realize python binding of class template case. 
 * Use explicitly type to bind the class template.
 * Use different binding name (e.g. IntStack, FloatStack).
 */

#include <pybind11/pybind11.h>
#include "ClassTemplate.h"

namespace py = pybind11;

PYBIND11_MODULE(class_template, m) {
  // Bind class template with int type
  py::class_<Stack<int>>(m, "IntStack")
    .def(py::init<>())
    .def("push", &Stack<int>::push)
    .def("pop", &Stack<int>::pop)
    .def("top", &Stack<int>::top)
    .def("empty", &Stack<int>::empty);

  // Bind class template with float type
  py::class_<Stack<float>>(m, "FloatStack")
    .def(py::init<>())
    .def("push", &Stack<float>::push)
    .def("pop", &Stack<float>::pop)
    .def("top", &Stack<float>::top)
    .def("empty", &Stack<float>::empty);
}