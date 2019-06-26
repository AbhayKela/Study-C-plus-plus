#include <iostream>
#include "personaldata.h"

void printdata(PD person)
{
    std::cout << "Name:     " << person.name << std::endl;
    std::cout << "LastName: " << person.lastname << std::endl;
    std::cout << "Country:  " << person.country << std::endl;
}