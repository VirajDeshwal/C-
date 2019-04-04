#include<iostream>
using namespace std;

 
int EculidGCD(int a, int b)
{
    
    //Base Case
    if(a == 0)
    {
        return b;
    }
    
    
    return EculidGCD(b%a, a);
}

int main()
{
    int a, b;
    cout<<"Enter the first numbers: ";
    cin>>a;
    cout<<"\nEnter the second number: ";
    cin>>b;

    cout<<"The GCD is: "<<EculidGCD(a,b);

    return 0;
}