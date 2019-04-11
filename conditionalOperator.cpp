#include <iostream>
// This program gives the output based on if give condition is met or not

int main(){
    system ("clear");
    int a = 10;
    int b = 20;
    std::string message = (a > b) ? "a is greater than b" : "a less than or equal to b";
    std::cout << message << std::endl;
    std::cout << std::endl;

    std::cout << ((7 > 4 ? 7 : 4) + 10) << std::endl;
    return 0;

}