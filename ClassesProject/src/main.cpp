#include <iostream>
#include "personaldata.cpp"

void test(){
	Personaldata person[5];
}
// Destrcutor is the place where we free up memory

int main()
{
    Personaldata person1;
    Personaldata person2;

    person1.setage(-90);
    person2.setage(32);


    std::cout << "Data of Person 1: " << person1.getage() << std::endl;
    std::cout << "Data of Person 2: " << person2.getage() << std::endl;
	//test();
    return 0;
}