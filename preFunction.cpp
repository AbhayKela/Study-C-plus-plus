#include <iostream>

int main ()
{
    system ("clear");
    int nr, result = 0;
    int digits;
    for (int i = 0;i < 5 ; i++)
    {
        std::cout << "Enter number " << (i+1) << " :  ";
        std::cin >> nr;
        result = result + nr;
        digits = i+1;
    }
    std::cout << result << std::endl;
    std::cout << "We have added " << digits << " digits" << std::endl;
    return 0;
}