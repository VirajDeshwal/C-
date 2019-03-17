#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Defining a vector
    vector<int> vectorInts;

    //Defining an iterator
    vector<int>::iterator it;

    cout<<"Vector has "<<vectorInts.size()<<" elements\n\n";
    cout<<"Adding an element in the end of the vector\n";
    //.assign(size, value)
    vectorInts.assign(1,23);
    //iterating through the vector
    for(it = vectorInts.begin(); it!=vectorInts.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<"Adding four elements to the tail of a vector\n";
    vectorInts.push_back(20);
    vectorInts.push_back(30);
    vectorInts.push_back(40);
    vectorInts.push_back(50);
    cout<<"Vector has "<<vectorInts.size()<<" elements:\n";

    //printing the content of a vector
    for(it=vectorInts.begin();it!=vectorInts.end();++it)
    {
        cout<<*it<<" ";
        
    }
    cout<<"\n\n";

    return 0;
}