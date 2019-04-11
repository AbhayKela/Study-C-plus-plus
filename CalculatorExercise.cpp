#include <iostream>

int main(){
    double var1 , var2;
    beggining:
    system ("clear");

    std::cout <<"Enter first number" << std::endl;
    std::cin >> var1;
    std::cout << "Enter second number" << std::endl;
    std::cin >> var2;

    std::cout << "What arthemetic operation you want to do?" << std::endl;
    std::cout << "+ : for addition" << std::endl;
    std::cout << "- : for substraction" << std::endl;
    std::cout << "* : for multiplication" << std::endl;
    std::cout << "/ : for division" << std::endl;

    char decision;
    std::cin >> decision; 
    system ("clear");

    switch (decision)
    {
        case '+' :
            std::cout << var1 << " + " << var2 << " = " << (var1+var2) << std::endl;
            break;

        case '-' :  
            std::cout << var1 << " - " << var2 << " = " << (var1-var2) << std::endl;
            break;

        case '*' :
            std::cout << var1 << " * " << var2 << " = " << (var1*var2) << std::endl;
            break;

        case '/' :
        if (var2 != 0)
            std::cout << var1 << " / " << var2 << " = " << (var1/var2) <<std::endl;
            else
            std::cout << "Second number can not be equal to zero" << std::endl;
            break;
    default:
    std::cout << "You entered a wrong charatcter" << std::endl;
    }
    
    char decision2;
    std::cout << "Do you want to continue the program? (Y/N)" << std::endl;
    std::cin >> decision2;

    if (decision2 == 'y' || decision2 == 'Y')
    {
        goto beggining;
    }    
    return 0;
}