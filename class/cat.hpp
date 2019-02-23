#include<iostream>

using namespace std;

class Cats 
{
    string name,breed;
    int age;

public:
    //SET functions
    void setName(string getNameIn);
    void setBreed(string getBreedIn);
    void setAge(int getAgeIn);
    

    //GET functions
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};
    //Describing the SET methods

    void Cats::setName(string getNameIn)
    {
        name = getNameIn;
    }

    void Cats::setBreed(string getBreedIn)
    {
        breed = getBreedIn;
    }

    void Cats::setAge(int getAgeIn)
    {
        age = getAgeIn;
    }

    
    //Describing the GET methods

    string Cats::getName()
    {
        return name;
    }

    string Cats::getBreed()
    {
        return breed;
    }

    int Cats::getAge()
    {
        return age;
    }
    void Cats::printInfo()
    {
        std::cout<<"Cat: ";
        std::cout<<name<<" "<<breed<<" "<<age;
    }

