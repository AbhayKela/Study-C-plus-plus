#include <iostream>
#include "point.cpp"

void OperationPoint();

int main() {
	system("clear");
	std::cout << "Hello to inheritance of class project" << std::endl;
	OperationPoint();
	return 0;
}

void OperationPoint()
{
	Point3D p2(33,32,45); // assigning value of p1 to be 33 
	p2.setX(222); // unless mentioned it will take value for function setX from latest derived class
	std::cout << p2.getX() << std::endl;
	p2.Point::setX(1000); // to get x from class Point
	std::cout << p2.getX() << std::endl;
	std::cout << p2.getY() << std::endl;
	std::cout << p2.getZ() << std::endl;

}