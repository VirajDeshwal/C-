#include <vector>
#include<iostream>
using namespace std;

long long  maxMul(const vector<int> &number)
{
   int max1 = -1;
   for (int i=0; i<number.size(); ++i)
   {
       if((max1 ==-1) || (number[i] > number[max1])) 
       /* checking the condition 
        1. if max = -1 or index i > max */

       {
           max1 = i;
       }
   }
   int max2 = -1;
   for(int j=0; j< number.size(); ++j)
   {
       if((number[j] != number[max1]) && ((max2 ==-1) || (number[j]> number[max2])))
       {
           max2=j;
       }
   }
   return ((long long) (number[max1])) * number[max2];

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
    long long result = maxMul(number);
    cout<<"The result is: "<<result<<"\n";
    return 0;
}

