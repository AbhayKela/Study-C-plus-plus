#include <iostream>

int main(){
    system ("clear");

    int a = 19;
    int *p = &a; // pointer will point to the address of variable | & is must

    std::cout << "value of variable a   : "<< a << std::endl;
    std::cout << "address of variable a : "<< &a << std::endl;
    std::cout << "address of pointer p  : " << p << std::endl;
    std::cout << "value store at pointer p, *p: "<< *p << std::endl; // * before p will output value at given address in memory
    
    *p = 30; // Pointer can be used to change the value of variable at the same address
    std::cout << "changing value using pointer, a: " << a <<std::endl;
    std::cout << "updated value at pointer p,  *p: " << *p << std::endl;
    
    std::cout<<std::endl;
    int var = 50;
    int * const p_const = & var;
    std::cout << "address of new variable var : "<< &var << std::endl;
    std::cout << "address for pointer p_const : " << p_const << std::endl;
    std::cout << "value pointer p_const, *p   : "<< *p_const << std::endl;

   // p_const = & a; can not change location of constant pointer but value can be changes
    *p_const = 89;
    std::cout << "value pointer p_const, *p   : "<< *p_const << std::endl;

    return 0;
}