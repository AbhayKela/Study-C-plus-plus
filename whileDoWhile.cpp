#include <iostream>

int main ()
{
    system ("clear");
    long int GivenNumber = 12115798573985;
    int NumberofDigits = 1;
    long int tmp = GivenNumber;

    while (tmp /= 10)
        NumberofDigits++;
    std::cout << "The given number " << GivenNumber << " has " << NumberofDigits << " total digits" << std::endl;
    return 0;
}