#include "classes_and_array.hpp"

int main()
{
    //Make a constant array size
    const int SIZE = 3;
    //Create a course of students
    Student course1[SIZE];

    //Each array element is a student type
    // so it has access to the memebers of student

    course1[0].setId(1000);
    course1[1].setId(1111);
    course1[2].setId(2222);

    course1[0].setGrade(0,83);
    course1[1].setGrade(0,76);
    course1[2].setGrade(0,72);

     course1[0].setGrade(1,87);
    course1[1].setGrade(1,52);
    course1[2].setGrade(1,70);

    course1[0].setGrade(2,90);
    course1[1].setGrade(2,85);
    course1[2].setGrade(2,82);

    for(int i=0; i<SIZE; i++)
    {
        course1[i].printInfo();
        cout<<"\n\n";
    }
    return 0;

}