#include "point.h"
#include <iostream>

Point :: Point (int x)
{
    this -> x = x;
    std::cout<< "Contructor from Point class is invoked" << std::endl;
}
Point :: ~Point ()
{
    std::cout<< "Destructor from Point class is invoked" << std::endl;
}
void Point ::setX(int x)
{
    this -> x = x;
    std::cout << "I am from class Point" <<std::endl;
}

Point2D :: Point2D (int x, int y) : Point(x) // getting value of x from class Point
{
    this -> y = y;
    std::cout<< "Contructor from Point2D class is invoked" << std::endl;
}
Point2D :: ~Point2D ()
{
    std::cout<< "Destructor from Point2D class is invoked" << std::endl;
}

void Point2D ::setY(int y)
{
    this -> y = y;
}
void Point2D::setXY(int x, int y)
{
    setX(x); // to maintain integrity of the class and avoid possible repetation errors in x
    setY(y);
}

Point3D :: Point3D (int x, int y, int z) : Point2D(x,y) // getting value of x & 7 from class Point & Point 2D
// Note Point3D can not be directly connected with point class here as it is not direct base for Point3D
{
    this -> z = z;
    std::cout<< "Contructor from Point3D class is invoked" << std::endl;
}
Point3D :: ~Point3D ()
{
    std::cout<< "Destructor from Point3D class is invoked" << std::endl;
}
void Point3D ::setZ(int z)
{
    this -> z = z;
}
void Point3D::setXYZ(int x, int y, int z)
{
    setX(x); // to maintain integrity of the class and avoid possible repetation errors in x
    setY(y); // to maintain integrity of the class and avoid possible repetation errors in y 
    setZ(z);
}
void Point3D::setX(int x)
{
    this -> x = x;
    std::cout << "I am from class Point3D" <<std::endl;
}