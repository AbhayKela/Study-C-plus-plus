#include <iostream>
#include <fstream>

int main()
{
	system ("clear");
	std::fstream hstfile1("Test1.txt"), hstfile2("Test2.txt");
	char string1[256], string2[256];
	int j; j = 0;

    std::cout << "\nBoth the files are opened\n";

	while(!hstfile1.eof())
	{
		hstfile1.getline(string1,256);
		hstfile2.getline(string2,256);
		j++;
		if(strcmp(string1,string2) != 0)
		{
			std::cout << "Line/s number "<< j << " not equal" << "\n";
			std::cout << "   " << string1 << "\n";
			std::cout << "   " << string2 << "\n";
		}
	}
    return 0;
}
