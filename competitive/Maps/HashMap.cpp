#include<iostream>
#include<map>
using namespace std;

int main()
{

map<int, char> cc;
pair<map<int,char>::iterator, bool> ret;
    cc.insert(pair<int, char>(1,'a'));
    cc.insert(pair<int, char>(2, 'b'));
    cc.insert(pair<int, char>(3, 'c'));
    cc.insert(pair<int, char>(4,'d'));
    map<int, char>:: iterator itr1;
    
    cout<<"\tKEY\tVALUE\n";
    for(itr1=cc.begin(); itr1 != cc.end(); ++itr1)
    {
        
        cout<<'\t'<<itr1->first<<'\t'<<itr1->second<<"\n";
    }
    cout<<endl;

    ret = cc.insert(pair<int, char>(3, 'c'));
    if(ret.second == false)
    {
        cout<<"Element is already existed with a value of "<<ret.first->second<<"\n";
    }

    return 0;

}