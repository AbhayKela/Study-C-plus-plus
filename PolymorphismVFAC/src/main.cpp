#include <iostream>
#include "farm.cpp" 

// This project is for Polymorphism, vistual function and abstract classes
void voiceofAnimal(Animal *); // creating void function with pointer to animal class 
void voiceofAnimal(Animal &); // same as above with reference method
int main() 
{
	system("clear");
	//Animal animal;
	Dog dog;
	Cat cat;
	Cow cow;
	/* 
	std::cout << animal.getvoice() << std::endl;
	std::cout << dog.getvoice() << std::endl;	
	std::cout << cat.getvoice() << std::endl;
	std::cout << cow.getvoice() << std::endl;
	*/
	voiceofAnimal(&dog); // & (reference) used to send address of variable dog and it is preferrable method
	voiceofAnimal(dog);
	return 0;
}
void voiceofAnimal(Animal *p)
{	
	std::cout << p -> getvoice() << std::endl; // arrow operator is must for the pointer
}
void voiceofAnimal(Animal &p)
{	
	std::cout << p.getvoice() << std::endl; // dot operator for reference
}