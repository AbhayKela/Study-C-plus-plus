#include <iostream>

enum dayofWeek {M=1,TU,W,TH,FRI,SA,SUN}; 
//As by dedault index starts from 0, initiating first variable with index value 1
std::string getday(dayofWeek d);

int main()
{
    system ("clear");
    int i;
    std::cout << "Enter number for day from following options only" <<std::endl;
    std::cout << "1. Monday" <<std::endl;
    std::cout << "2. Tuesday" <<std::endl;
    std::cout << "3. Wednesday" <<std::endl;
    std::cout << "4. Thursday" <<std::endl;
    std::cout << "5. Friday" <<std::endl;
    std::cout << "6. Saturday" <<std::endl;
    std::cout << "7. Sunday" <<std::endl;
    std::cout << "====================================" <<std::endl;

    std::cin >> i;

    dayofWeek d = M; // defining d as variable with enum type
    std::cout << getday (dayofWeek(i)) <<std::endl;
    return 0;
}

std::string getday(dayofWeek d)
{
    switch(d)
    {
        case M:
            return "Monday";
        case TU:
            return "Tuesday";
        case W:
            return "Wednesday";
        case TH:
            return "Thursday";
        case FRI:
            return "Friday";
        case SA:
            return "Saturday";
        case SUN:
            return "Sunday";
        default:
            return "You entered invalid value";
    }
}