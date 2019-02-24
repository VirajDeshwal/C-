#include "helper_func.hpp"

int main()
{
    //defining an object for Class Student
    Student s1;

    s1.setId(001);
    s1.setGrade(0,100);
    s1.setGrade(1,100);
    s1.setGrade(2,90);
    s1.setGrade(3,90);
    s1.setGrade(4,100);

    s1.printInfo();
    cout<<"Avg;"<<s1.getAvg();
    return 0;
}