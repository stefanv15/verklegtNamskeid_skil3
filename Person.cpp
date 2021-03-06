#include "person.h"

//Sjálfgefni smiðurinn fyrir Person klasann.
Person::Person()
{
    id = 0;
    name = "";
    gender = "";
    dayOfBirth = 0;
    dayOfDeath = 0;
}

//Smiður fyrir Person klasann til að upphafsstilla private breytur fyrir utan id.
Person::Person(string n, string g, int dob, int dod)
{
    id = 0;
    name = n;
    gender = g;
    dayOfBirth = dob;
    dayOfDeath = dod;
}

//Smiður fyrir Person klasann til að upphafsstilla private breytur.
Person::Person(int i, string n, string g, int dob, int dod)
{
    id = i;
    name = n;
    gender = g;
    dayOfBirth = dob;
    dayOfDeath = dod;
}

//Skilar "ID".
int Person::getId()
{
    return id;
}

//Skilar "name".
string Person::getName()
{
    return name;
}

//Skilar "gender".
string Person::getGender()
{
    return gender;
}

//Skilar "DayOfBirth".
int Person::getDayOfBirth()
{
    return dayOfBirth;
}

//Skilar "DayOfDeath".
int Person::getDayOfDeath()
{
    return dayOfDeath;
}

//Stillir id á persónu út frá id völdu úr töflu.
void Person::setId(int id)
{
    this->id = id;
}
