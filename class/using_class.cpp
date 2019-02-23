#include "main.hpp"

int main()
{
    int integer1 = 4;
    float float1 = 4.33;
    Student student1;

    //assign a value to the Student class
    student1.setName("Viraj");
    student1.setId(619);
    student1.setgradDate(2019);

    //Two ways of printing the values of Student class
    //1. Call the print function from class
    std::cout<<"Student = ";
    student1.print();
    std::cout<<"\n\n";

    //2. Call the Get() method from class.
    std::cout<<"Using the print function from the class\n";
    std::cout<<"Student name = "<<student1.getName()<<endl;
    std::cout<<"Student Id = "<<student1.getId()<<endl;
    std::cout<<"Student GradDate = "<<student1.getDate()<<endl;

    return 0;
   

}