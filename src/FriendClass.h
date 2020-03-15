/*
 * FriendClass.h
 * This library is to illustrate a friend class case.
 */

#include <iostream>

using namespace std;

class Rectangle {
  public:  
    Rectangle() {
      Length=10;
      Breadth=20;
    }
  private:
    int Length;
    int Breadth;
    // Square can access Rectangle private member
    friend class Square;
};

class Square {
  public:
    Square() {
      S=5;
    }
    // Access Rectangle private member
    void Display(Rectangle Rect) {
      cout << "Length : " << Rect.Length << endl;
      cout << "Breadth : " << Rect.Breadth << endl;
      cout << "Side : " << S << endl;
    }
  private:
    int S;
};

