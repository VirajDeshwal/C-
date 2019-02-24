#include<iostream>
using namespace std;

class Student
{
    int grade[5];
    int id;

    public:
        Student();
        void setId(int getIdIn);
        void setGrade(int index, int getGradeIn);
        int getGrade(int index);
        int getId();
        float getAvg();
        void printInfo();
};

//Defining the constructon
Student::Student()
{
    for(int i=0; i<5; i++)
    {
        grade[i] = 0;
    }
    id = 0;
}

//Defining the Set() function
void Student::setId(int getIdIn)
{
    id = getIdIn;
}

void Student::setGrade(int index, int getGradeIn)
{
    grade[index] = getGradeIn;
}

int Student::getId()
{
    return id;
}

int Student::getGrade(int index)
{
    return grade[index];
}

//Helper function Avg()
float Student::getAvg()
{
    int sum=0;
    for (int i=0; i<5; i++)
    {
        sum = sum+ grade[i];

    }
    return sum/5.0;
}

void Student::printInfo()
{
    cout<<id<<"\n";
    for (int i=0; i<5; i++)
        cout<<grade[i]<<" ";
}