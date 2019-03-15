#include <iostream>
#include <string>
using namespace std;

//The base class

class Student
{
    int id;
    public: 
            //SET functions 
            void setId(int idIn);
            int getId();
            Student();
};

//Definition of a constructor
Student::Student()
{
    id = 00000;
}

void Student:: setId(int idIn)
{
    id = idIn;
}

int Student::getId()
{
    return id;
}

//The derived class with Student as a base class
class Gradstudent : public Student
{
    private:
            string degree;
    public:
            Gradstudent();
            void setDegree(string degreeIn);
            string getDegree();
};

Gradstudent::Gradstudent()
{
    degree = "undeclared";
}

void Gradstudent::setDegree(string degreeIn)
{
    degree = degreeIn;
}

string Gradstudent:: getDegree()
{
    return degree;
}