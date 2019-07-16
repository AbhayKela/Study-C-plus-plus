#include <iostream>
#include <fstream>

int main()
{
    // write() : 
    std::fstream file;

    file.open("sample-writefile.txt", std::ios::out | std::ios::binary);
    if (file.is_open())
    {
        char sample[] = "sample text";
        // sizeof(sample) = 12 including the null character ate the end of text, it can be removed by -1
        file.write(sample, sizeof(sample)); // instead of size of sample can give any number to be written

    }
    else {std::cout << "File could not be opened"<< std::endl;}

    return 0;
}
