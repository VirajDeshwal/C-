#include "inheritance.hpp"

int main()
{
    //An object for class
    Gradstudent gs1;

    gs1.setId(123456);
    gs1.setDegree("MS");

    std::cout<<gs1.getId()<<" "<<gs1.getDegree()<<endl;
    return 0;
}