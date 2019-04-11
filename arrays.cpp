#include <iostream>
// subscript operator:- []
// subscript/ index  :- (index value)
// array is group of same kind of variables 

int main(){
    system ("clear");
    int array[4]; // Type Name [Size /number of elements in array]

    array[0] = 10;
    array[1] = 50;
    array[2] = 256;
    array[3] = 512;

    std::cout << "array[0] = " << array [0] << ", address: " << &array[0] << std::endl;
    std::cout << "array[1] = " << array [1] << ", address: " << &array[1] << std::endl;
    std::cout << "array[2] = " << array [2] << ", address: " << &array[2] << std::endl;
    std::cout << "array[3] = " << array [3] << ", address: " << &array[3] << std::endl;

    // std::cout << "array[3] = " << array [0] << ", address: " << array << std::endl;

        if (&array[0] == array)
        {
                std::cout << "Thats true" << std::endl;  
        }
        return 0;
}