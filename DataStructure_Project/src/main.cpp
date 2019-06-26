#include <iostream>
#include "printdata.h"

int main(int argc, char *argv[]) {
	std::cout << "Hello Easy C++ project!" << std::endl;
	PD person;

	person = {"Abhay", "Kela", "India"};
	printdata(person);
}