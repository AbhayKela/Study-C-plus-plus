#include <iostream>
#include "copier.cpp"

int main() {
	std::cout << "Hello Easy C++ project!" << std::endl<<std::endl;

	Test obj1 (100,50,87);
	Test obj2 = obj1;

	std::cout << "obj1.x: " << obj1.x <<std::endl;
	std::cout << "obj1.p: " << *(obj1.p) <<std::endl;
	std::cout << "obj1.y: " << obj1.y <<std::endl<<std::endl;

	*(obj2.p) = 390;

	std::cout << "obj2.x: " << obj2.x <<std::endl;
	std::cout << "obj2.p: " << *(obj2.p) <<std::endl;
	std::cout << "obj2.y: " << obj2.y <<std::endl<<std::endl;
}