#include <iostream>
#include <fstream>

int main()
{
    std::fstream myFilehandler;
    myFilehandler.open("OpencloseFile.txt");
    if (myFilehandler.is_open())
    {
        std::cout <<"The file is open properly!" <<std::endl;
        myFilehandler << "Hey! Changing text here."; // This is to add text to given file
        myFilehandler.close();
    }
    return 0;
}