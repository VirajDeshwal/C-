#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    vector<int> ar {1,2,4,6,7,8,7,5,4,6,7,8,5,4,3,2,4,5,6,8,8};
    map<int, int> mp;
    map<int, int>::iterator itr;
    vector<int>::iterator itr1;

    for(itr1= ar.begin(); itr1 != ar.end(); ++itr1)
    {
        mp[ar[*itr1]]++;
    }
    cout<<"\tKEY\tFREQUENCY";
    for(auto i : mp)
    {
        cout<<"\t"<<i.first<<"\t"<<i.second<<endl;
    }
    
    

    return 0;
}