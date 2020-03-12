/*
 * FuncTemplate.cpp
 * This file is to realize python binding of function template case. 
 */

#include <pybind11/pybind11.h>
#include "FuncTemplate.h"

namespace py = pybind11;

PYBIND11_MODULE(func_template, m) {
  m.def("Max", &Max<float>);
  m.def("Max", &Max<int>);
}