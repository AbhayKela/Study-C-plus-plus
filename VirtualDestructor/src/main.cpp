#include <iostream>
#include "farm.cpp" 

// This project is for Polymorphism, vistual function and abstract classes

// void voiceofAnimal(Animal *); // creating void function with pointer to animal class 
// void voiceofAnimal(Animal &); // same as above with reference method
int main() 
{
	system("clear");
	//Animal animal; // this can not work because base class animal is abstract class
	/* 
	Dog dog;
	Cat cat;
	Cow cow;
	
	std::cout << animal.getvoice() << std::endl; // this can not work
	std::cout << dog.getvoice() << std::endl;	
	std::cout << cat.getvoice() << std::endl;
	std::cout << cow.getvoice() << std::endl;
	
	voiceofAnimal(&dog); // & (reference) used to send address of variable dog and it is preferrable method
	voiceofAnimal(dog);
	*/ 
	//Dog dog; // both the base class and derived class destructor will be invoked

	Animal *dog = new Dog; // for this to work used virtual destructor in base class
	delete dog; 


	return 0;
}
/* 
void voiceofAnimal(Animal *p)
{	
	std::cout << p -> getvoice() << std::endl; // arrow operator is must for the pointer
}
void voiceofAnimal(Animal &p)
{	
	std::cout << p.getvoice() << std::endl; // dot operator for reference
}
*/