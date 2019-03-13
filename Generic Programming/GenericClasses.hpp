#include<iostream>
using namespace std;

//Defining a Generic Class
template <class T>
class StudentRecord
{
    private:
            
            T grade;
            int studentId;
    public:
            //Defining the constructor for the Generic Class
            StudentRecord(T input);
            void setId(int idIn);
            void printGrades();
};

template<class T> 
StudentRecord<T>::StudentRecord(T input)
{
    grade = input;
}

template<class T>
void StudentRecord<T>::setId(int idIn)
{
    studentId = idIn;
}

template<class T>
void StudentRecord<T> ::printGrades()
{
     cout<<"ID# "<<studentId<<": ";
    cout<<grade<<"\n ";
    cout<<"\n";
} 