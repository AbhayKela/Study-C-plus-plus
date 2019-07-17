#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

void pressEnter();

void addPerson();
void showPeople();
void savePeopleToFile();
void loadPeopleFromFile();
void searchPeopleFromFile();
void removePeopleFromFile();

struct Person 
{
    std::string name;
    std::string surname;
    short age;
    std::string telephone;
};
short PeopleinDataBase;
Person people[20];
int main()
{
    char test;
    loadPeopleFromFile();
    do 
    {
        std::cout << "Number of people in database: " << PeopleinDataBase << std::endl; 
        std::cout << "MENU: "<<std::endl;
        std::cout << "1. Add person: "<<std::endl;
        std::cout << "2. Show all people: "<<std::endl;
        std::cout << "3. Save people to database: "<<std::endl;
        std::cout << "4. Load people from database: "<<std::endl;
        std::cout << "5. Search people from database: "<<std::endl;
        std::cout << "6. Remove people from database: "<<std::endl;

        test= std::getchar();
        switch(test)
        {
            case '1': 
                addPerson();
                break;
            case '2': 
                showPeople();
                break;
            case '3': 
                savePeopleToFile();
                break;
            case '4': 
                loadPeopleFromFile();
                break;
            case '5': 
                searchPeopleFromFile();
                break;
            case '6': 
                removePeopleFromFile();
                break;
        }
        pressEnter();
        system("clear");
    } while (getchar() != 27); // 27 is number in ASCII table for ESC/esc
    return 0;
}

void pressEnter()
{
    std::cout << "Click enter to continue...." <<std::endl;
    while (getchar() !=13); //13 is number in ASCII table for ENTER
}

void addPerson()
{
    std::cout << "Type name: " << std::endl;
    std::cin>> people[PeopleinDataBase].name;

    std::cout << "Type surname: " << std::endl;
    std::cin>> people[PeopleinDataBase].surname;

    std::cout << "Type age: " << std::endl;
    std::cin>> people[PeopleinDataBase].age;

    std::cout << "Type telephone: " << std::endl;
    std::cin>> people[PeopleinDataBase].telephone;

    PeopleinDataBase++;
}

void showPeople()
{
    if (PeopleinDataBase > 0)
    {
        for (int i =0; i < PeopleinDataBase; i++)
        {
            std::cout << "Person index: " << (i+1) << std::endl;
            std::cout << "Name: " << people[i].name << std::endl;
            std::cout << "Surname: " << people[i].surname << std::endl;
            std::cout << "Age: " << people[i].age << std::endl;
            std::cout << "Telephone: " << people[i].telephone << std::endl;
        }
    } else {std::cout << "No one in database" <<std::endl;}
}

void savePeopleToFile()
{
    std::ofstream file("database.txt");

    if (file.is_open())
    {
        file <<  PeopleinDataBase <<std::endl;
        for (int i = 0; i < PeopleinDataBase; i++)
        {
            file << people[i].name << std::endl;
            file << people[i].surname << std::endl;
            file << people[i].age << std::endl;
            file << people[i].telephone << std::endl;
        }
        file.close();
    } else {std::cout << "Can not save the database" <<std::endl;}
}

void loadPeopleFromFile()
{
    std::ifstream file ("database.txt");

    if (file.is_open())
    {
        file >>  PeopleinDataBase;
        if (PeopleinDataBase < 0)
        {
            /*
            for (int i = 0; i < PeopleinDataBase; i++)
            {
                file >> people[i].name;
                file >> people[i].surname;
                file >> people[i].age;
                file >> people[i].telephone;
            }
            */
            int i = 0;
            do
            {
                file >> people[i].name;
                file >> people[i].surname;
                file >> people[i].age;
                file >> people[i].telephone;
                i++;
            } while (!file.eof());
            std::cout << "People data hs been loaded successfuelly" <<std::endl;
        }else {std::cout << "Database is empty" <<std::endl;}
    } else {std::cout << "The file database.txt does not exist" <<std::endl;}
}

void searchPeopleFromFile()
{
    if (PeopleinDataBase > 0)
    {
        std::string name;
        std::cout << "Type the name of person you want to look for: " << std::endl;
        std::cin >> name;

        for (int i = 0; i<PeopleinDataBase ; i++)
        {
            if (name == people[i].name)
            {
                std::cout << "Person index: " <<(i+1) <<std::endl;
                std::cout << "Name: " <<(people[i].name) <<std::endl;
                std::cout << "Surame: " <<(people[i].surname) <<std::endl;
                std::cout << "Age: " <<(people[i].age) <<std::endl;
                std::cout << "Telephone: " <<(people[i].telephone) <<std::endl;
            }
        }
    }else {std::cout << "Nobody in database with given name" <<std::endl;}
}

void removePeopleFromFile()
{
    if (PeopleinDataBase > 0)
    {
        short index;
        std::cout << "Who do you want to remove?" << std::endl;
        std::cin >> index;

        if (PeopleinDataBase >= index)
        {
            for (short k = index; k < PeopleinDataBase; k++)
            {
                people[k-1].name = people[k].name;
                people[k-1].surname = people[k].surname;
                people[k-1].age = people[k].age;
                people[k-1].telephone = people[k].telephone;
            }
            PeopleinDataBase--;
            savePeopleToFile();
        } else {std::cout << " There is nobody like that" <<std::endl;}
    } else{std::cout << "There is nothing to remove from database" << std::endl;}
}