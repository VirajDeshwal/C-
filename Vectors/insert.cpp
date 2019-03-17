#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Defining the vector
    std::vector<int> vIn;

    //Defining the iterator
    std::vector<int>::iterator it;

    //printing the size of vector
    cout<<"Vector has "<<vIn.size()<<" elements.\n";

    //Pushing the values into the vector
    vIn.push_back(1);
    vIn.push_back(2);
    vIn.push_back(3);
    vIn.push_back(4);
    vIn.push_back(5);

    //printing the size of a vector
    cout<<"Vector has "<<vIn.size()<<" elements.\n";

    //printing the elements of a vector
    for(it=vIn.begin();it!=vIn.end(); ++it)
        cout<<*it<<" ";
    cout<<"\n";
    
    //Inserting an elements after the first index of an iterator
    it = vIn.begin();
    //inserting at it+1 index and -1 value.
    vIn.insert(it+1, -1);
    //printing the values of a vector
    cout<<"\nInserting the value -1 after index 1 \n";
    for(it = vIn.begin();it!=vIn.end();++it)
    {
        cout<<*it<<" ";
    }
        
    cout<<"\n\n";

    //Inserting an element after third index of a vector
    it = vIn.begin();
    
    cout<<"inserting value -3 at index 4\n";
    vIn.insert(it+3, -3);
    //Printint the elements of a vector
    for(it = vIn.begin();it!=vIn.end();++it)
    {
        cout<<*it<<" ";
    }
        
    cout<<"\n\n";

    return 0;
}