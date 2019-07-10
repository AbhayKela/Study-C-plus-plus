#include <iostream>
#include "point.h"
// This project is very important for the generalized and speacialized class templates

void OperationPoint();
template<typename T, typename T2>
T add (T var1, T2 var2) // T & T2 are two different types of variable
{
	return var1 + var2;
}
typedef Point<double> PointInt;
int main() {
	system("clear");
	std::cout << "Validate add template: " << add <double,double> (2,3.4+5.5) << std::endl;
	OperationPoint();
	return 0;
}

void OperationPoint()
{
	Point<int> a(5); // variable type is must
	PointInt b(10.7);
	std::cout << "Output from Point class: " << std::endl;
	std::cout << a.getX() <<std::endl;
	std::cout << b.getX() <<std::endl;
	
	Point2D <double> p1(3.4,3.1);
	Point2D <double> p2(2.3,4.2); 
	Point2D <double>sum = add (p1,p2);

	std::cout << "Output from Point2D class: " << std::endl;
	std::cout << sum.getX() <<std::endl;
	std::cout << sum.getY() <<std::endl;

	Point<int> c(46);
	std::cout << c.getX() <<std::endl;

}