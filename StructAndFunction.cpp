#include <iostream>

struct Employee
{
    std::string Name;
    std::string Company;
    int age;
    std::string sex;
};

void printstruct(Employee employee)
{
    std::cout << "Name:    " <<employee.Name << std::endl;
    std::cout << "Company: " <<employee.Company << std::endl;
    std::cout << "Age:     " <<employee.age << std::endl;
    std::cout << "Sex:     " <<employee.sex << std::endl<<std::endl;;
}

int main()
{
    system("clear");
    Employee x = {"joe", "friends", 33 , "Male"};
    Employee y = {"Sam", "Cummins", 44, "Male"};
    printstruct(x);
    printstruct(y);

    return 0;
}