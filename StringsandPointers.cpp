#include <iostream>
// For convertting stings to characters use Const Characters and pointer
// For converting character to string is straight forward

int main ()
{
    system ("clear");
    std::string text = "This is a test to convert string to character";
    /*for (int i = 0; i < text.length(); i++)
    {
        std::cout << text[i] << std::endl;
    }*/

    char Ch[5] = "1234";
    for (int i = 0; i<5 ; i++ )
    {
        std::cout << Ch[i] << std::endl;
    }

    // begining
    std::cout << Ch[0] << std::endl;
    std::cout << *(Ch)<< std::endl;
    // second character
    std::cout << Ch[1] << std::endl;
    std::cout << *(Ch+1)<< std::endl;

    // Creating pointer
    char *p = Ch;

    std::cout << p[2] << std::endl;
    std::cout << *(p+2)<< std::endl;

    const char *Ch2 = text.c_str();
    std::cout << Ch2 << std::endl;

    char array[] = "here is a test 76876876";
    std::string text3 = array;

    std::cout << text3 <<std::endl;



    return 0;
}
