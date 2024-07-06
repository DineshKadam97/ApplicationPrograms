// #include "Point.h"
// #include <vector>
// #pragma once
// class Triangle {
// public:
   
 
//     Triangle(); //default constructor
//     Triangle(Point a, Point b, Point c);// parameterized constructor
//     ~Triangle();//destructor
   
//     Point findIncenter(Point p1, Point p2,Point p3);
//     double findArea(Point p1, Point p2,Point p3);
// private:
//    Point vertices[3]; //vertices for defining triangle size  
 
// };

#pragma once
#include"Point3D.h"

class Triangle
{
public:
    Triangle(Point3D p1, Point3D p2, Point3D p3);
    ~Triangle();

    Point3D p1();
    Point3D p2();
    Point3D p3();

private :
   Point3D mP1, mP2, mP3;
};
