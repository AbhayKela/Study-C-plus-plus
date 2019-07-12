#include<iostream>
#include<fstream>

int main()
{
    /*
    tellp - tell put - tell where is the putting pointer
    seep - seek put - set writing(putting) pointer at specified location

    seekp(how_many_bytes_from_the_flag_place, flag); It is an overloaded function

    possible flag:
    std::ios::beg - begin
    std::ios::end - set from the end
    std::ios::cur - current - set from the current place

     */
    system("clear");
    std::fstream file;
    file.open("sample.txt", std::ios::out | std::ios::binary);

    if (file.is_open())
    {
        std::string tmp = "this is text about nothing";
        file << tmp;

        std::cout << file.tellp() <<std::endl;

        file.seekp(0, std::ios::beg);
        file << "T";
    }


    else 
        std::cout << "The file could not be opened properly" << std::endl;
    return 0;
}