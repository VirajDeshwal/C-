//header file for main.cpp
/*TODO: 
*-  create a class called Pet
*- it inherits from both the class Patient 
*- and the class Dog
*- Pet has one private member: name
*- Pet has public getName and setName functions.
*/
#include<iostream>
#include<string>
using namespace std;
class Patient
{
    private:
        int idNumber;
    public:
        void setIdNumber(int idIn);
        int getIdNumber();
};

void Patient::setIdNumber(int idIn)
{
    idNumber = idIn;
}

int Patient::getIdNumber()
{
    return idNumber;
}

class Dog
{
    private:
        string breed;
    public:
        void setBreed(string breedIn);
        string getBreed();
};

void Dog::setBreed(string breedIn)
{
    breed = breedIn;
}

string Dog::getBreed()
{
    return breed;
}

class Pet: public Patient, Dog
{
    private:
            string name;
    public:
            Pet();
            void setName(string nameIn);
            string getName();
            string getBreedName();
            int getId();
};

Pet::Pet()
{
    name = "Unknown";
}

void Pet::setName(string nameIn)
{
    name = nameIn;
    
}
string Pet::getName()
{
    return name;
}

string getBreedName(string breedIn)
{
    return Dog::getBreed();
}

int Pet::getId(int idIn)
{
    return Patient::getIdNumber();
}