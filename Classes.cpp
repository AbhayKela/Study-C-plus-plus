#include <iostream>

class personaldata
{
    private: // variables can be used within the classes only
    short age;

    public:  // below variable can be used outside of this class
    void setage(int value)
    {   if (value < 0)
            age = 0;
        else 
            age = value;
    }
    short getage()
    {
        return age;
    }
};

int main()
{
    personaldata person1;
    personaldata person2;

    person1.setage(-90);
    person2.setage(32);


    std::cout << "Data of Person 1: " << person1.getage() << std::endl;
    std::cout << "Data of Person 2: " << person2.getage() << std::endl;

    return 0;
}