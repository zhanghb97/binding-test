#include <iostream>
#include <string>

using namespace std;

// Define function template
template <typename T>
T const& Max (T const& a, T const& b) { 
  return a < b ? b:a; 
} 

