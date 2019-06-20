#include <iostream>

int main()
{
    system("clear");

    double var = 3.3;
    int a = 5;
    int b = 7;
    std::cout << "Output: " << a/b<< std::endl;
    std::cout << "Output_typeCasting_explict changing one variable type: " << (double)a/b<< std::endl<<std::endl; // C version
    std::cout << "Output_typeCasting_explict changing one variable type: " << static_cast <double>(a)/b<< std::endl<<std::endl; // C++ version

    char ch = 'k';
    std::cout << "Check value of char (k) in ASCII table: " << int(ch)<< std::endl<<std::endl;
    return 0;
}