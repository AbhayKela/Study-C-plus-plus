#include<iostream>
#include<fstream>

int main()
{
    /*
    bad() - badbit(1) -  return true for error like writing to file which is opened only for reading
    fail() - failbit(4) - returns true if we try to assign string to integer while reading from file

    eof() - eofbit(2) - end of file - true for file open to read reaches to end of file

    1 - 001
    2 - 010
    4 - 100

    bitwise operator: & | ^
    rdstate() - read state 
    good() - returns true if everything is file / above flags are false
    clear() - slear state
     */
    system("clear");
    std::fstream file;
    file.open("sample.txt", std::ios::in);

    if (file.is_open())
    {
        /* 
        file << "Adding text for test";
        std::cout<<file.bad()<<std::endl; // function "bad" is true for file in read only mode and trying to modify the sample.txt
        file.clear();
        int tmp;
        file>>tmp;
        std::cout << tmp<<std::endl;
        */
       
       std::string buffer;
       do
       {
           file>>buffer;
           std::cout << buffer << std::endl;
       } while (!file.eof());

       std::cout << file.rdstate() <<std::endl; // output will be 2 for eof

       if ((file.rdstate() ^ std::ifstream::eofbit) == 0)
       {
           file.clear();
       }
    }

    else 
        std::cout << "The file could not be opened properly" << std::endl;
    return 0;
}