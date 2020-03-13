/*
 * TemplateInheritance.h
 * This library is to illustrate a template inheritance case.
 * This library refits from MultiInheritance.h
 */

#include <iostream>
 
using namespace std;
 
// Base class template: Shape
template <class T>
class Shape {
  public:
    void setWidth(T w) {
      width = w;
    }
    void setHeight(T h) {
      height = h;
    }
    void printWidth() {
      cout << width << endl;
    }
  protected:
    T width;
    T height;
};
 
// Base class template: PaintCost
template <class T>
class PaintCost {
  public:
    T getCost(T area) {
      return area * 70;
    }
};
 
// Derived class with template inheritance feature: Rectangle
class Rectangle final : public Shape<int>, public PaintCost<int> {
  public:
  int getArea() { 
    return (width * height); 
  }
};

