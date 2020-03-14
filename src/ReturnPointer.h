/*
 * ReturnPointer.h
 * This library is to illustrate a return pointer case.
 */

#include <iostream>
 
using namespace std;
 
class Box {
  public:
    static int objectCount;
    // Create a box
    static Box *create(int length, int breadth, int height) {
      Box *box = new Box();
      box->length = length;
      box->breadth = breadth;
      box->height = height;
      box->objectCount++;
      return box;
    }
    // Calculate volume
    int Volume() {
      return length * breadth * height;
    }
    // Return the count of boxes.
    static int getCount() {
      return objectCount;
    }
  private:
    int length;
    int breadth;
    int height;
};

int Box::objectCount = 0;
