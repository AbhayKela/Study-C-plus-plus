#include "integer.h"

Integer::Integer (int nr)
{
    this -> nr = nr;
}
Integer::operator int()
{
    return this -> nr;
}
int Integer::operator+= (Integer o) // must be followed by type int
{
    this -> nr = o.getNr() + this-> nr;
    return this -> nr;

};
