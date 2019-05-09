#include"competitive.hpp"

int main()
{
    Competitive c; // An object for the class competitive.
    int num;
    string str;
    cout<< "Enter the number: ";
    cin>>num;
    cout<<"Enter the String: "<<endl;
    cin>>str;
    

    c.Reverse(str);
    c.MulDivby2(num);
    c.EvenOdd(num);

   
    return 0;
}