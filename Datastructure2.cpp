#include<iostream>

struct PersonalData
{
    std::string Name;
    std::string LastName;
    int age;
    std::string country;
};
/*void PrintData(PersonalData Person)
{
    std::cout << "Name:     " << Person.Name <<std::endl;
    std::cout << "LastName: " << Person.LastName <<std::endl;
    std::cout << "Age:      " << Person.age <<std::endl;
    std::cout << "County:   " << Person.country <<std::endl<<std::endl;;
}*/

int main (){
    system("clear");
    PersonalData Person[2];

    Person[0].Name = "Abhay";  
    Person[0].LastName = "Kela"; 
    Person[0].age = 32; 
    Person[0].country = "India"; 

    Person[1].Name = "Pink";  
    Person[1].LastName = "Rathi"; 
    Person[1].age = 31; 
    Person[1].country = "India"; 


    std::cout << (*Person).Name << std::endl;
    std::cout << (*&Person[0]).Name << std::endl;
    std::cout << Person->Name << std::endl;
    std::cout << (Person+1)->Name << std::endl;
    

    // PrintData (Person[2]);
    // PrintData (Person[1]);
    return 0;
}