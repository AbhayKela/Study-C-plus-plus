#include <iostream>

int main(){
    system ("clear");

    for (int i = 1 , j = 1; i <= 10; i++)
    {
        std::cout.width(8);
        std::cout << i * j;
        if (i == 10)
        {
            j++;
            i = 0;
            std::cout << std::endl;
        }
        if (j == 10 + 1)
            break;
    }
    return 0;
}