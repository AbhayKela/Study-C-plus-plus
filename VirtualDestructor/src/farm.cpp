#include "farm.h"
#include <iostream>

Animal::Animal() {} //getvoice() not defined here as it abstract class and will not be used to output
Animal :: ~Animal()
{
    std::cout << "I am from base class" <<std::endl;
} 
Dog:: Dog()
{   sign = "D";
    voice = "bou";
}
Dog :: ~Dog()
{
    std::cout << "I am from derived class - Dog" <<std::endl;
}
Cat:: Cat()
{   sign = "C";
    voice = "meow";
}
Cat :: ~Cat()
{
    std::cout << "I am from derived class - Cat" <<std::endl;
}
Cow:: Cow()
{   sign = "CO";
    voice = "mooooo";
}
Cow :: ~Cow()
{
    std::cout << "I am from derived class - Dog" <<std::endl;
}