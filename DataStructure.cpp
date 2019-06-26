#include<iostream>

struct PersonalData
{
    std::string Name;
    std::string LastName;
    int age;
    std::string country;
};
void PrintData(PersonalData Person)
{
    std::cout << "Name:     " << Person.Name <<std::endl;
    std::cout << "LastName: " << Person.LastName <<std::endl;
    std::cout << "Age:      " << Person.age <<std::endl;
    std::cout << "County:   " << Person.country <<std::endl<<std::endl;;
}

int main (){
    system("clear");
    PersonalData Person[3];

    Person[1].Name = "Abhay";  
    Person[1].LastName = "Kela"; 
    Person[1].age = 32; 
    Person[1].country = "India"; 

    Person[2].Name = "Pink";  
    Person[2].LastName = "Rathi"; 
    Person[2].age = 31; 
    Person[2].country = "India"; 
    

    PrintData (Person[2]);
    PrintData (Person[1]);
    return 0;
}