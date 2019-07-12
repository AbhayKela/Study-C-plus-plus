#include<iostream>
#include<fstream>

int main()
{
    /*
    tellg - tell get - tell where is the reading pointer
    seeg - seek get - set reading pointer at specified location

    seekg(how_many_bytes_from_the_flag_place, flag);

    possible flag:
    std::ios::beg - begin
    std::ios::end - set from the end
    std::ios::cur - current - set from the current place

     */
    system("clear");
    std::fstream file;
    file.open("sample.txt", std::ios::in | std::ios::binary);

    if (file.is_open())
    {
        std::string buffer;
        file.seekg(5, std::ios::end);
        std::streampos sizeofFile = file.tellg();
        file.seekg(0);
        std::cout << "The size of file is " << sizeofFile << " bytes" << std::endl;
       do
       {
           file>>buffer;
           std::cout << buffer << std::endl;
       } while (!file.eof());

       if ((file.rdstate() ^ std::ifstream::eofbit) == 0)
       {
           file.clear();
           std::cout << file.tellg() << std::endl;
           file >> buffer;
           std::cout << buffer << std::endl;
       }
    }

    else 
        std::cout << "The file could not be opened properly" << std::endl;
    return 0;
}