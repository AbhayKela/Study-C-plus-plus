#include <iostream>

void multiply (int & , int);
void multiplyarray (int * , int, int);
int main ()
{
    system ("clear");
    int a = 80;
    multiply (a, 6);
    std::cout << "Output of multiply function = " << a << std::endl <<std::endl;
    
    int array [10];
    std::cout << "Bytes stored in memory for above array = " << sizeof(array) << std::endl;
    std::cout << "Bytes stored in memory for above array = " << sizeof(array[0]) << std::endl<<std::endl;
    for (int i= 0 ; i<sizeof(array)/sizeof(array[0]) ; i++)
    {
        array [i] = i;
    }
    std::cout << "Function for array multiplication:" <<std::endl;
    multiplyarray (array, 9, sizeof(array)/sizeof(array[0]));
    for (int i= 0 ; i< sizeof(array)/sizeof(array[0]) ; i++)
    {
        std::cout << "Array [" << i <<"]" << " = " << array[i] << std::endl;
    }
    return 0;
}

void multiply (int & var , int amount)
{
    var *= amount; // it is same as var = var * amount
}

void multiplyarray (int *array , int amount, int sizeofArray) // array can be mentioned as array[] instead of *array as pointers
{
    for (int i = 0; i < sizeofArray; i++)
    {
        array [i] *= amount;

    }
        
}