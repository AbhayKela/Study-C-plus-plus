#include <iostream>

int main()
{
    int arr[5] = {10,20,30,40,50};
    for (int i=0; i<5; i++)
    {
        std::cout << arr[i]<< std::endl;
    }

    /* // range base is from C++11 extension
    
    for (int i:arr) 
    {
        std::cout << i << std::endl;

    }
    */
}
