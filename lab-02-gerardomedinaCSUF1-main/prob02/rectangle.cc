// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 4-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "rectangle.h"

unsigned int Rectangle::Area() const {

  int area = length_* width_;

  // ===================== YOUR CODE HERE ========================
  // Compute the area of this rectangle object.
  // Remember that member functions can access the member variables of the
  // class. Hint: look at `rectangle.h` to see the member variables you can
  // access.
  // =============================================================
  return area;
}

unsigned int Rectangle::Perimeter() const {

  int perimeter= (2*length_)+(2*width_);
  // ===================== YOUR CODE HERE ========================
  // Compute the perimeter of this rectangle object.
  // =============================================================
  return perimeter;
}

Rectangle LargestRectangleByArea(Rectangle &r1, Rectangle &r2) {

  if(r1.Area() > r2.Area()){
    return r1;}
    else{
      return r2;
    }
  
  // ===================== YOUR CODE HERE ========================
  // Compare the areas of the two given rectangles, and return
  // the Rectangle whose area is larger.
  // =============================================================
  return r1;
}
