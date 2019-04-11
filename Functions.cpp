#include <iostream>
// Functions and methods

int main ()
{
    system ("clear");
    std::string tmp;
    std::cout << "Enter the string (try to provide less than 50 letters and without spaces)" << std::endl;
    std::cin >> tmp;
    std::cout << tmp.length() << std::endl;
    return 0;
}