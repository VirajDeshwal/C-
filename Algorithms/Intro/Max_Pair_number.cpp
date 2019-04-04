#include <vector>
#include<iostream>
using namespace std;

int maxMul(const vector<int> &number)
{
    int result = 0;
    int n = number.size();  // n is equal to the length of numbers.
    for (int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)  //comparing index i and index i+1;
        {
            if(number[i]*number[j]>result)
            {
                result = number[i]*number[j];
            }
        }
    }
    return result;
}

int main()
{
    int n;
    cout<<"How many numbers: \n";
    cin>>n;
    cout<<"Enter the numbers: \n";
    vector<int> number(n);
    for(int i=0; i<n; ++i)
    {
        cin>>number[i];
    }
    int result = maxMul(number);
    cout<<"The result is: "<<result<<"\n";
    return 0;
}

