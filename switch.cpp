#include <iostream> 

int main (){
    system ("clear");
    int x;
    beggining:
    std::cout<< "Please provide any value of X from 0 to 100" << std::endl;
    std::cin >> x;
    if (x < 0 || x >= 101)
    {
        std::cout << std::endl;
        std::cout << "Please provide any values of x between 0 to 100 only" << std::endl;
    }
    else
    {
        switch (x)
        {
            case 0:
            std::cout << "Condition of x = 0 is met" << std::endl;
            break;
            case 25:
            std::cout << "Condition of x = 25 is met" << std::endl;
            break;
            case 50:
            std::cout << "Condition of x = 50 is met" << std::endl;
            break;
            default:
            std::cout << " The given value of X is not equals to 0 or 25 or 50" << std::endl;
        }
    }
    char decision;
    std::cout << "Do you want to continue the program? (Y/N)" << std::endl;
    std::cin >> decision;

    if (decision == 'y' || decision == 'Y')
        goto beggining;
    return 0;
}