#include <iostream>

int main()
{
    // peek() - peek without extract
    char c = std::cin.peek(); // if we use get() function here, it will not output first digit of the number or alphabet of text

    if (c > '0' && c < '9')
    {
        int number;
        std::cin >> number;
        std::cout << "Number is: " << number << std::endl;
    }
    else 
    {
        std::string txt;
        std::cin >> txt;
        std::cout << "Text is: " << txt << std::endl;
        
    }

    return 0;
}