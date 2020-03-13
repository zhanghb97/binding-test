/*
 * ClassTemplate.h
 * This library is to illustrate a class template case.
 */

#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

// Define class template: Stack 
template <class T>
class Stack { 
  private: 
    vector<T> elems; 
 
  public: 
    void push(T const&);
    void pop();
    T top() const;
    bool empty() const {
      return elems.empty(); 
    } 
}; 

// Push an element in the top of Stack
template <class T>
void Stack<T>::push (T const& elem) {
  elems.push_back(elem);    
} 

// Pop the top element out of Stack
template <class T>
void Stack<T>::pop () { 
  if (elems.empty()) { 
    throw out_of_range("Stack<>::pop(): empty stack"); 
  }
  elems.pop_back();         
} 

// Return the copy of the last element
template <class T>
T Stack<T>::top () const { 
  if (elems.empty()) { 
    throw out_of_range("Stack<>::top(): empty stack"); 
  }
  return elems.back();      
} 

