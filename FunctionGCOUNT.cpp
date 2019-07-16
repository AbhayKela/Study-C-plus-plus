#include <iostream>
#include <fstream>

int main()
{
    // gcount() - get character count - get count of extracted characters from last extraction operation : 
    std::fstream file;

    file.open("sample-gcount.txt", std::ios::in | std::ios::binary);
    if (file.is_open())
    {
        char buffer[250];
        do
        {
            file.getline(buffer,250);
            std::cout <<buffer << " " << file.gcount() <<std::endl;
        } while (!file.eof());
        

    }
    else {std::cout << "File could not be opened"<< std::endl;}

    return 0;
}
