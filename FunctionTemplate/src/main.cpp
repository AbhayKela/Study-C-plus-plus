#include <iostream>
#include "point.cpp"

void OperationPoint();
template<typename T, typename T2>
// T & T2 are two different types of variable
T add (T var1, T2 var2)
{
	return var1 + var2;
}
/* Use following template only when no access to changes in class Point2D declaration
template<>
Point2D add(Point2D var1,Point2D var2)
{
	Point2D tmp;
	tmp.setX(var1.getX() + var2.getX());
	tmp.setY(var1.getY() + var2.getY());
	return tmp;
}
*/
int main() {
	system("clear");
	std::cout << add <double,double> (2,3.4+5.5) << std::endl;


	OperationPoint();
	return 0;
}

void OperationPoint()
{
	Point2D p1(3,3);
	Point2D p2(2,4); 
	Point2D sum = add (p1,p2);

	std::cout << sum.getX() <<std::endl;
	std::cout << sum.getY() <<std::endl;

}