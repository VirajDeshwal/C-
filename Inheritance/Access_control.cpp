#include "Access_control.hpp"
int main()
{
    Gradstudent st1;

    st1.setStudentId(12345);
    st1.setDegree("MSE");
    std::cout<<st1.getStudentId()<<"  "<<st1.getDegree()<<"\n\n\n";
    return 0;
}