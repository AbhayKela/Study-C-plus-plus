#include <iostream>
#include "user.cpp"

int main(int argc, char *argv[]) {
	std::cout << "Hello Easy C++ project!" << std::endl<<std::endl;

	User a;
	User b;
	User c[50];

	std::cout << a.getID() << std::endl;
	std::cout << b.getID() << std::endl;
	std::cout << c[21].getID() << std::endl; // as counter = 3 at c and c starts from 0 so 21+3 = 24

}