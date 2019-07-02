#include "copier.h"

Test::Test (int x, int y,int value)
{
    this -> x = x;
    this -> y = y;
    this -> p = new int(value);
}

Test::~Test()  {} // deleting dynamic memory
Test::Test(const Test & obj)
{
    this -> p =  new int (*(obj.p));
    this -> x = obj.x;
    this -> y = obj.y;
}