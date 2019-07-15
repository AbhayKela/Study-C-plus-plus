#include<iostream>
#include<fstream>
#include "string.h"

bool areFilesEqual(std::fstream *, std::fstream *);
int sizeofFile (std::fstream *);

int main()
{
    // read() - where to read, how many files to read
    // memcmp() - memory compare
    std::fstream file1, file2;
    file1.open("compare2file_1.txt", std::ios::in | std::ios::binary |std::ios ::ate);
    file2.open("compare2file_2.txt", std::ios::in | std::ios::binary |std::ios ::ate);

    if (file1.is_open() && file2.is_open())
    {
       std::cout << "Both the files are open." <<std::endl;
       if (areFilesEqual(&file1, &file2))
       {
           std::cout << "Files are equal" << std::endl;
       }
       else
            std::cout << "Files are not of equal. Atleast 1 byte is different on both files." << std::endl;
    }
    else 
        std::cout << "The file could not be opened properly" << std::endl;
    return 0;
}
bool areFilesEqual(std::fstream *a, std::fstream *b)
{
    int filesize1 = sizeofFile(a);
    int filesize2 = sizeofFile(b);

    if (filesize1 == filesize2)
    {   
        int BUFFER_SIZE = filesize1;

        if (filesize1 > 1024)
            BUFFER_SIZE = 1024;
        else
            BUFFER_SIZE = filesize1;
    
        char *file1buffer = new char[BUFFER_SIZE];
        char *file2buffer = new char[BUFFER_SIZE];
        do
        {
            a->read(file1buffer,BUFFER_SIZE);
            b->read(file2buffer,BUFFER_SIZE);   

            if(memcmp(file1buffer, file2buffer, BUFFER_SIZE) != 0)
            {
                std::cout << "Files are equal" << std::endl;
                delete [] file1buffer;
                delete [] file2buffer;
                return false; 
            }
        }while (a -> good() && b -> good());

        delete [] file1buffer;
        delete [] file2buffer;
        return true;
    }
    else 
        return false;
}
int sizeofFile (std::fstream *file)
{
    file -> seekg(0, std::ios::end);
    int sizeofFile = file->tellg();
    file -> seekg(0, std::ios::beg);

    return sizeofFile;
}
