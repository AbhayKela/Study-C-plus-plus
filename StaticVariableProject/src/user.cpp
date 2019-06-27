#include "user.h"
int User::counter = 0; // Initilization of static variable

User::User() // Defining constructor     
{
    // ID = 0; // initializing variable in constructor
    counter ++;
    ID = counter;

}

User :: ~User() // Defining desctructor
{



}