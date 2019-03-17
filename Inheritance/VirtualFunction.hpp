#include<iostream>
#include<string>
using namespace std;

class Employee
{
    float payrate;
    string name;
    int employeeNumber;

    public:
            void setPayRate(float payIn);
            float getPayRate();
            string getName();

            //This is a virtual Function
            virtual float calcWeeklyPay();
};

void Employee::setPayRate(float payIn)
{
    payrate = payIn;
}

float Employee::getPayRate()
{
    return payrate;
}

//Definition of a Virtual Function
float Employee::calcWeeklyPay()
{
    // 40 hours a week into the payrate for an employee
    return 40*payrate;
}

//Dervied class from base(Employee) class
class Manager: public Employee
{
    public: 
            float calcWeeklyPay();
};

//Defintion for the method 
float Manager::calcWeeklyPay()
{
    //Weekly salary is based on the yearly salary.
    //Divided by the 52 weeks to get the weekly pay rate for the Manager

    return Employee::getPayRate()/52;
}
