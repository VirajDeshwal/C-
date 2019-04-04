#include<iostream>
using namespace std;

int main()
{   
    int n;
    int num1 = 0;
    int num2 =1;
    int next = 0;
    cout<<"How many numbers: \n";
    cin>>n;
    cout<<"Fibonacci: ";
    for(int i=0; i<=n; ++i)
        {
            if(i==1)
                {
                    continue;
                }
            else
                {
                    
                    next = num1+num2;
                    num1 = num2;
                    num2 = next;
                    cout<< next<< "  ";
                }
            cout<<"\n";
        }
    return 0;
}