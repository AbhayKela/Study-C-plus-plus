#include <iostream>
// to understand the for loop
int main()
{
    system ("clear");
    /* for (initilization; condition; increment/decrement)
        {
            instruction to repeat;
            instruction to repeat;
            .
            .
        } */   
    std::cout << " This is first exmaple" << std::endl;     
    for (int i = 0; i < 5; i++)
        {
        std::cout << "hi" << std::endl;
        std::cout << i << std::endl;
        }
    std::cout << " This is second exmaple" << std::endl;  
   int array[5];
   for (int i = 0; i < 5; i++)
    {
        array[i] = i;
        std::cout << "array " << i << " : "<< array[i] << std::endl;
    }   
    return 0;    
}