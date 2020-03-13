/*
 * MultiInheritance.h
 * This libaray is to illustrate a multiple inheritance case.
 */

#include <iostream>
 
using namespace std;
 
// Base class: Shape
class Shape {
  public:
    void setWidth(int w) {
      width = w;
    }
    void setHeight(int h) {
      height = h;
    }
    void printWidth() {
      cout << width << endl;
    }
  protected:
    int width;
    int height;
};
 
// Base class: PaintCost
class PaintCost {
  public:
    int getCost(int area) {
      return area * 70;
    }
};
 
// Derived class with multiple inheritance feature: Rectangle
class Rectangle final : public Shape, public PaintCost {
  public:
  int getArea() { 
    return (width * height); 
  }
};

