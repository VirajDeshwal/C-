#include <iostream>
#include <map>
#include <iterator>
using namespace std;


int main()
{
map<int, char> cc;
map<int, char>::iterator itr;

//inserting the elemenets into map
    cc.insert(pair<int, char>(1,'a'));
    cc.insert(pair<int, char>(2, 'b'));
    cc.insert(pair<int, char>(3, 'c'));
    cc.insert(pair<int, char>(4,'d'));

    int del;
    del = cc.erase(3);
    std::cout<<"ERASED!\n";
    std::cout<<"\tKEY\tELEMENT\n";
    for(itr = cc.begin(); itr != cc.end(); ++itr)
    {
        std::cout<<'\t'<<itr->first<<'\t'<<itr->second<<'\n';
    }
    std::cout<<endl;
return 0;
}