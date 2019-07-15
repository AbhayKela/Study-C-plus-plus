#include<iostream>
#include<fstream>

int main()
{
    /*
        getline()-(where to store extracted char, how many chars, separater (delimited)) - extracts delimiter
        get()- ((where to store extracted char, how many chars, separater (delimited)) - does not extracts delimiter)
        ignore()

     */
    std::fstream file;
    file.open("extractingchar.txt", std::ios::in | std::ios::binary);

    if (file.is_open())
    {
        char first_initial, second_initial;
        char buffer[50];
        std::cin.getline(buffer,50); // Input
        std::cout << buffer <<std::endl;

        do
        {   file.getline(buffer,50, ' ');
            second_initial = file.get();
            file.ignore(40, '\n');
            std::cout << buffer << " " << second_initial << "."<<std::endl;
        } while (!file.eof());
/* 
        do
        {   first_initial = file.get();
            std::cout << first_initial <<std::endl;
            file.ignore(40,' ');
            second_initial = file.get();
            file.ignore(40, '\n');
            std::cout << second_initial <<std::endl;
        } while (!file.eof());
*/
    /* 
        while (file.get(buffer,50, '\n')) // it gets 50 char unless reaches end of line
        {
            file.ignore(1);
            std::cout << buffer << std::endl;
        }     
    */        
    }
    else 
        std::cout << "The file could not be opened properly" << std::endl;
    return 0;
}