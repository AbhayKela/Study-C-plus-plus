#include <iostream>

int main(){
    system ("clear");
    // integer // -2 billions to 2 billions // takes 4 bytes of memory
    int a = 40,b,c = 50;
    std::cout <<"a: " << a << "  address a: "<< &a <<std::endl;
    std::cout <<"b: " << b << "  address b: "<< &b <<std::endl;
    std::cout <<"c: " << c << "  address c: "<< &c <<std::endl;

    // Short integer / short // -32768 to 32767 // takes 2 bytes of menory
    short t1 = 5;
    std::cout << "t1 = " << t1 <<std::endl;
    
    /* Integer or short integer does not take fraction values. Float or doubles are used fractions values based on the following:
    Float // upto 38 zeros // takes 4 bytes of memory
    Doubles // upto 308 zeros // takes 8 bytes of memory
    doubles should be used for high precision value requirements */

    float t2 = 5.7768;
    double t3 = 5.627492874982;
    std::cout << "t2 = " << t2 << " address t2 = " << &t2 << std::endl;
    std::cout << "t3 = " << t3 << " address t3 = " << &t3 << std::endl;

    char t4;
    t4 = 'd';
    std::cout << t4 << std::endl;

    std::string t5 = "Hello World!";
    std::string x = "part1";
    std::string y = " part2";
    std::string combinedstring = x + y;
    std::cout << combinedstring << std::endl;

    bool t6 = 5>8;
    bool t7 = 4<5;
    std::cout << t6 << std::endl; 
    std::cout << t7 << std::endl;

    //for unsigned short integer, 0 to 65535
    unsigned short int t8 = 3800;
    std::cout << t8 << std::endl;

    const std::string NAMEOFGAME = "conqurer of C++";
    std::cout << NAMEOFGAME << std::endl;
    return 0;

}