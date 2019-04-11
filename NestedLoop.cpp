#include <iostream>

int main (){
    system ("clear");

    for (int i = 1; i <= 50; i++)
    {
        for (int j = 1; j <= 10; j++)
            {
                std::cout.width(6);
                std::cout << i*j;
            }
        std::cout << std::endl;
    }  
    return 0;       
}