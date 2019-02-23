#include <iostream>
#include<stdio.h>

using namespace std;

//Defining the class

class Student
{
    string name;
    int id, gradDate;

// Public methods
public:
// Set functions 
void setName(string nameIn);
void setId(int idIn);
void setgradDate(int dateIn);

//Get functions
string getName();
int getId();
int getDate();

//Print function
void print();

};




// Defining the set() functions
void Student::setName(string nameIn)
{
    name=nameIn;
}

void Student::setId(int idIn)
{
    id = idIn;
}

void Student::setgradDate(int dateIn)
{
    gradDate = dateIn;
}

void Student::print()
{
    std::cout<<name<<" "<<id<<" "<<gradDate;
}

//Defining the get() functions
string Student::getName()
{
    return name;
}

int Student::getId()
{
    return id;
}

int Student::getDate()
{
    return gradDate;
}