#include "personaldata.h"
#include <iostream>

void Personaldata::setage(int value)
{   if (value < 0)
        age = 0;
    else 
        age = value;
}

Personaldata :: Personaldata()
{
    static int i = 0;
    std::cout << "constructor has been invoked " << ++i << std::endl;
    age = 50;

    p = new int[5]; // allocating memory to new random variable
}

Personaldata :: ~Personaldata()
{
    static int j = 0;
    std::cout << "desctructor has been invoked " << ++j << std::endl;
    delete [] p; // deleting random variable or freeing up memory 
}