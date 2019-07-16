#include <iostream>
#include <fstream>

int main()
{
    /*
        put() - character to put on stream
     */

    std::fstream file;
    std::string txt = "Thistextisconnected";

    for (int i = 0; i < txt.length(); i++)
    {
        std::cout.put(txt[i]).put(' ');
    }

    file.open("test.txt", std::ios::out | std::ios::binary);

    if(file.is_open())
    {
        char c;
        do
        {
            c = std::cin.get();
            file.put(c);
        } while (c != '.');
    }
    else{std::cout << "File did not open" <<std::endl;}
    return 0;
}