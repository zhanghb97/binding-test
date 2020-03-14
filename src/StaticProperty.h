/*
 * StaticProperty.h
 * This library is to illustrate a static property case.
 */

#include <iostream>
 
using namespace std;
 
class Box {
  public:
    static int objectCount;
    // Constructor
    Box(double l=2.0, double b=2.0, double h=2.0) {
      cout <<"Constructor called." << endl;
      length = l;
      breadth = b;
      height = h;
      // Count of box plus one.
      objectCount++;
    }
    // Calculate volume
    double Volume() {
      return length * breadth * height;
    }
    // Return the count of boxes.
    static int getCount() {
      return objectCount;
    }
  private:
    double length;
    double breadth;
    double height;
};

int Box::objectCount = 0;
