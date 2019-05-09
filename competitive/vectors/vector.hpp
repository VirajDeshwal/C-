#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Operations
{
    public:
        void Vec(vector<int> V1);
        void Reverse(vector<int> V1);
        
        void SR(string S1);
       
        

};

void Operations::Vec(vector<int> V1)
{
 
    cout<<"The input is: ";
     for(auto i = V1.begin(); i != V1.end(); i++)
        {
            cout<<*i<<" ";
        }
        cout<<endl;
}

void Operations::Reverse(vector<int> V1)

{
    
    cout<<"Reverse of the input is: ";
    for(auto i = V1.rbegin(); i != V1.rend(); i++)
        {
            cout<<*i<<" ";
        }
        cout<<endl;
}
