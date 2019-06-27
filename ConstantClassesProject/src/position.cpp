#include "position.h"
#include <iostream>

Position::Position (int x , int y) // defininig constructor
{
    this -> x = x;
    this -> y = y; // this is to use same name of variable
}

Position::~Position() {}// defining destructor

void Position::getPosition() const 
{
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}

void Position::setPosition(int x, int y)
{
    this -> x = x;
    this -> y = y;
}