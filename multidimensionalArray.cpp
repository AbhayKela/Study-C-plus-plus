#include <iostream>

int main()
{
    system ("clear");
    int biarray[3][4];

    std::cout << &biarray[0][0] << std::endl;
    std::cout << &biarray[1] << std::endl;
    std::cout << &biarray[1][0] << std::endl;
    std::cout << &biarray[0] << std::endl;
    return 0;
}