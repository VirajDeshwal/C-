#include"VirtualFunction.hpp"

int main()
{
    const string status = "salary"; //Two options ("salary" or "level")
    string level = "salary";

    //Defining a pointer object for the base class
    Employee *e1;

    if(status!= level)
    {
        e1 = new Employee(); // difining an hourly employee
    }
    else
    {
        e1 = new Manager(); //defining a salaried employee
    }
    
    //This pointer returning the value of itself
    e1->setPayRate(12000.00);
    cout<<"e1 pay: $"<<e1->calcWeeklyPay();
    cout<<"\n\n\n\n";
    delete e1;
    return 0;
}