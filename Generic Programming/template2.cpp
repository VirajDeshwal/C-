#include "template2.hpp"

int main()
{
    int a;
    float b;
    cout<<"Enter the first number\n";
    cin>>a;

    cout<<"Enter the second number\n";
    cin>>b;


    //It will give output as an Integer.
    cout<<"Between "<<a<<" and "<<b<<"  "<<getbigger(a,b)<<" is bigger\n";

    //It will give output as an Float.
    cout<<"Between "<<a<<" and "<<b<<"  "<<getbigger(b,a)<<" is bigger\n";
}