// Please fill in below.
// <gerardo medina>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <gerardomedinacsuf1>
//
// Lab 4-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

#include "rectangle.h"

int main() {
int x_length=0;
int y_width=0;

  std::cout << "====== Rectangle 1 ======" << std::endl;

  // ===================== YOUR CODE HERE ========================
  // Accept user input for the length and width of rectangle 1,
  // and instantiate a new Rectangle object with these inputs.
  // =============================================================
Rectangle rect1{};
std::cout<< " Please enter the length: "<<std::endl;
std::cin>>x_length;
rect1.SetLength(x_length);
std::cout<<" Please enter the width: "<<std::endl;
std::cin>>y_width;
rect1.SetWidth(y_width);
std::cout<< " Rectangle 1 is created with length "<<rect1.GetLength()
        <<" and width "<< rect1.GetWidth()<<std::endl;
std::cout<<" The area of Rectangle 1 is "<<rect1.Area()<<std::endl;
std::cout<<" The perimeter of Rectangle 1 is "<<rect1.Perimeter()<<std::endl;
  std::cout << "====== Rectangle 2 ======" << std::endl;
Rectangle rect2{};
std::cout<<" Please enter the length: "<<std::endl;
std::cin>>x_length;
rect2.SetLength(x_length);
std::cout<<" Please enter the width: "<<std::endl;
std::cin>>y_width;
rect2.SetWidth(y_width);
std::cout<<" Rectangle 2 is created with length "<<rect2.GetLength()
          <<" and width "<< rect2.GetWidth()<<std::endl;
std::cout<<" The area of Rectangle 2 is "<<rect2.Area()<<std::endl;
std::cout<<" The perimeter of Rectangle 2 is "<<rect2.Perimeter()<<std::endl;

  
  // ===================== YOUR CODE HERE ========================
  // Call LargestRectangleByArea to determine which rectangle
  // is larger, and print out its length, width, and area.
  // Follow the README for formatting.
  // =============================================================
  std::cout<< " The largest rectangle has a length of "<<LargestRectangleByArea(rect1, rect2).GetLength()
  <<", a width of "<<LargestRectangleByArea(rect1, rect2).GetWidth()<<", and an area of "
  <<LargestRectangleByArea(rect1, rect2).Area()<<"."<<std::endl;
  return 0;
}
