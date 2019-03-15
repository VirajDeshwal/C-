#include<iostream>
#include<string>
using namespace std;

class Staff 
{
    //Describing the class Staff
    private:
            string title;
    public:
            Staff();
            void setTitle(string titleIn);
            string getTitle();
};

// Definition of Class Staff
Staff::Staff()
{
    title = "Unknown";
}

void Staff::setTitle(string titleIn)
{
    title = titleIn;
}

string Staff::getTitle()
{
    return title;
}




class GradStudent
{
    //Defining the class GradStudent
    private:
            int studentId;
    public:
            GradStudent();
            void setId(int idIn);
            int getId();
};

//Describing the class GradStudent

GradStudent::GradStudent()
{
    studentId = 00000000;
}

void GradStudent::setId(int idIn)
{
    studentId = idIn;
}

int GradStudent::getId()
{
    return studentId;
}


//Class Dervied from class Staff and class GradStudent
class TA : public Staff, public GradStudent
{
    private: 
            string supervision;
    public: 
            TA();
            void setSupervision( string supervisionIn);
            string getSupervision();
};

//Describing the derived class
TA::TA()
{
    supervision = "Unknown";
}

void TA::setSupervision(string idIn)
{
    supervision= idIn;
}

string TA::getSupervision()
{
    return supervision;
}