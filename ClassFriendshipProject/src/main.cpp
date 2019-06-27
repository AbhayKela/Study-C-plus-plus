#include <iostream>
#include "test.cpp"

int main() {
	B objB;
	A objA;

	objA.setsecretValue(objB, 600);

	std::cout << objB.getsecretValue() << std::endl;
	return 0;
}