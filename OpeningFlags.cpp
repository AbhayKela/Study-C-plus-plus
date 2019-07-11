#include <iostream>
#include <fstream>

int main()
{
    std::fstream file;
    file.open("sample.txt", std::ios::out| std::ios::ate | std::ios::in);
    /*  std::ios::in - INPUT - Reading
         std::ios::out - OUTPUT - Write to File
         std::ios::trunc - TRUNCATE - Truncating or cutting everything inside
         std::ios::ate - At The End - set pointer at the end of file
         The place of pointer can be changed in this mode, it is possible read and write in this mode
         std::ios::app - Append - add content at end of file only
         std::ios::binary - Open the files as a binary file
         (it may need opening image)

        (if there is not file create is else if file truncate it)

        Default Mode (Flags)
        std::fstream - std::ios::out | std::ios::in
        std::ifstream - std::ios::in
        std::ofstream - std::ios::out
    */

    if (file.is_open())
    {
        file << "Sample Text \n";
        file << "Sample Text \n";
        

    }
    else
        std::cout << "The file has not been opened properly" <<std::endl;

    return 0;
}