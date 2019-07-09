#include <iostream>

class Animal
{
    protected: 
        std::string voice;
    public: 
        Animal();
        ~Animal();
        virtual std::string getvoice()= 0; 
    /* assigning getvoice() to 0 for absrtact class and it can be used only to derive classes
    and not for output. virtual is used to verify derived classes.
    */  
     
};
class Dog: public Animal
{       std::string sign;
    public: 
        Dog();
        ~Dog();
        std::string getvoice(){return voice +" " + sign;}
};
class Cat: public Animal
{       std::string sign;
    public: 
        Cat();
        ~Cat();
        std::string getvoice(){return voice +" " + sign;}
};
class Cow: public Animal
{       std::string sign;
    public: 
        Cow();
        ~Cow();
        std::string getvoice(){return voice +" " + sign;}
};