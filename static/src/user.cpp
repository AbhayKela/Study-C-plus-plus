#include "user.h"
int User::counter = 0;

User::User()
{
    // ID = 0; // initializing variable in constructor
    counter ++;
    ID = counter;

}

User :: ~User()
{



}