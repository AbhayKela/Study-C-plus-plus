#include <iostream>
// enum = enumeration. It needs curly bracket 
// Disctionary menaning of enumeration = action of mentioning a number of things one by one

enum dayofWeek{M=1,TU,W,TH,FRI,SA,SUN};

int main ()
{
    system ("clear");
    std::cout << dayofWeek(FRI) <<std::endl;
    return 0;
}