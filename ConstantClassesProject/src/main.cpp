#include <iostream>
#include "position.cpp"

void setX(Position &, int); // declaring friend function to class position
// & : for reference in above declaration

int main() 
{
    Position A1 (10,50);
    std::cout << "Original position for x & y as below: " << std::endl;
    A1.getPosition();
    setX (A1,20); // here changing value of x in A1 with friend function
    //A1.setPosition(300,400);
    std::cout << "New position for x & y as below: " << std::endl;
    A1.getPosition();

    std::cout << "Constant in classes:" << std::endl;
    const Position house(13,14); // calling function is constant
    house.getPosition();
    //house.setPosition(23,23); // This should give an error message as "Position house" is constant type
    //house.getPosition();

    

    return 0;    
}

void setX(Position &obj , int value)
{
    obj.x = value;
    std::cout << "Friend function works!" <<std::endl;
}