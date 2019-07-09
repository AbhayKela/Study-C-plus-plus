#include <iostream>
#include "point.h"

Point :: Point (int x)
{
    this -> x = x;
    //std::cout<< "Contructor from Point class is invoked" << std::endl;
}
Point :: ~Point ()
{
   // std::cout<< "Destructor from Point class is invoked" << std::endl;
}
void Point ::setX(int x)
{
    this -> x = x;
    //std::cout << "Value of x is from class Point" <<std::endl;
}
/*---------------------------------------------------------------------- */
Point2D :: Point2D (int x, int y) : Point(x) // getting value of x from class Point
{
    this -> y = y;
   // std::cout<< "Contructor from Point2D class is invoked" << std::endl;
}
Point2D :: ~Point2D ()
{
    //std::cout<< "Destructor from Point2D class is invoked" << std::endl;
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
Point2D Point2D :: operator+ (Point2D o)
{
    Point2D tmp;
    tmp.setX(this->getX() + o.getX());
	tmp.setY(this->getY() + o.getY());

    return tmp;
}
