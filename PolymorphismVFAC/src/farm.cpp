#include "farm.h"
Animal::Animal() {} //getvoice() not defined here as it abstract class and will not be used to output
Animal :: ~Animal(){} 
Dog:: Dog()
{   sign = "D";
    voice = "bou";
}
Dog :: ~Dog(){}
Cat:: Cat()
{   sign = "C";
    voice = "meow";
}
Cat :: ~Cat(){}
Cow:: Cow()
{   sign = "CO";
    voice = "mooooo";
}
Cow :: ~Cow(){}