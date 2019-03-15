#include <iostream>
#include<string>
using namespace std;

class Student
{
    int id;
    public: 
            Student();
            void setId(int idIn);
            int getId();
};

Student::Student()
{
    id = 00000000;
}

void Student::setId(int idIn)
{
    id = idIn;
}

int Student::getId()
{
    return id;
}

//The derived class from base class

class Gradstudent : private Student
{
    private:
            string degree;
    public:
            Gradstudent();
            void setDegree(string degreeIn);
            string getDegree();
            void setStudentId(int idIn);
            int getStudentId();
};

Gradstudent::Gradstudent()
{
    degree = "Undeclared";
}

void Gradstudent::setDegree(string degreeIn)
{
    degree = degreeIn;
}
string Gradstudent::getDegree()
{
    return degree;
}

void Gradstudent::setStudentId(int idIn)
{
    Student::setId(idIn);
}

int Gradstudent::getStudentId()
{
    return Student::getId();
}