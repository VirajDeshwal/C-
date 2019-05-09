#include <bits/stdc++.h> 
using namespace std;

class Competitive
{
    public:
    void Reverse(string &str);
    void EvenOdd(int num);
    void MulDivby2(int num);
};

void Competitive::Reverse(string &str)
{
   int n = str.length();
   cout<<"The string is: "<<str<<endl;
    for(int i=0; i<n/2; i++)
    {
        swap(str[i], str[n-i-1]);
    }
    cout<<"The reverse of the string is : "<<str<<endl;
}

void Competitive::EvenOdd(int num)
{
    cout<<"The number is: "<<num<<endl;
    if(num & 1)
    {
        cout<<"The number is ODD.\n";
    }
    else
    {
        cout<<"The number is EVEN.\n";
    }
    
}
void Competitive::MulDivby2(int num)
{
    int mul = num<<1; // shifting the bit to left.
    int div = num>>1; //shifting the bit to right.
    cout<<"The number is : "<<num<<endl;
    cout<<"After mutlplication by 2 is :"<<mul<<endl;

    cout<<"The number is: "<<num<<endl;
    cout<< "After division by 2 is :"<<div<<endl;
}
