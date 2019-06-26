#include <iostream>

int main(int argc, char *argv[]) {
	system("clear");
	// argc : argument counter
	// argv : argument value

	char a[] = {'a', 'b','c', 'd','\0'}; // '\0' will end the output
	std::cout << a <<std::endl;
	char *b = "this is a test";
	std::cout << b <<std::endl;
	char *c[] = {"test1", "test2", "test3"};
	std::cout << c[1] <<std::endl;

	char x[] = "b";
	char y[] = "a";

	std::cout << (x==y) << std::endl; // this will compare the address of first character and will always be false/ 0 as both are located at different location
	std::cout << (strcmp(x,y)) << std::endl;
	// value of string comparison of character will depend on the position on character in ASCII table
	// 0 : for same ; 1 : y > x and -1 : x > y

	


	return 0;
}