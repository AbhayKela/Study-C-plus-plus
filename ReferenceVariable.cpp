#include <iostream>

int main ()
{   system ("clear");
    std::string name = "Abhay";
    std::cout << "Name: " << name << "; Address of name on disk: " << &name << std::endl;

    std::string &nm_1 = name; // & is a must for reference variable
    std::cout << "Name: " << nm_1 << "; Address of name on disk: " << &nm_1 << std::endl;

    nm_1 = "Pink";
    std::cout << "Name: " << nm_1 << "; Address of name on disk: " << &nm_1 << std::endl;
    
    return 0;
}

    /* 
    Reference variable must be initialized
    Reference variable share same address with original variable in memory, so if we chance any one of them both with change
    Ref var must be the same type as associated varibale
    */ 