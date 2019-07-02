#include <iostream>
#include "integer.cpp"
// convert constructor and overloading operators

int main() 
{
	Integer a(50);
	int b = (int)a; // giving value of a to be and changing value of a
	std::cout << "Initial value of  a using class:          " << a.getNr() << std::endl;
	a= 100;

	std::cout << "New value of a using convert constructor: " << a.getNr() << std::endl; // output = 100
	std::cout << "Value of integer b:                       " <<  b << std::endl; // output = 50
	std::cout << "Value of integer a + b:                   " << a + b << std::endl;

	// I need to add Integer a(50) & a = 100; 

	a +=b; // a = a+b; need to declare and define += operator
	std::cout << "Value of a after convert constructor and overloading operators: " << a.getNr() << std::endl; // output = 150
}