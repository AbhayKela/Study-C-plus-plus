#include<iostream>
// This program will replace values of the variable with space on disk. 
// this program can also run without reference variable but then it create new variables on disk and may consume more memory
void replaceValues(int &, int &);

int main ()
{
    system ("clear");
    int a = 20;
    int b = 30;

    std::cout << "value of a before replace function, a: " << a << &a << std::endl;
    std::cout << "value of b before replace function, b: " << b << &b << std::endl;

    replaceValues(a,b);
    return 0;
}
void replaceValues(int &x, int &y)
{
    int swap;

    swap = x;
    x = y;
    y = swap;

    std::cout << "value of a after replace function, a: " << x << &x << std::endl;
    std::cout << "value of b after replace function, b: " << y << &y << std::endl;
}