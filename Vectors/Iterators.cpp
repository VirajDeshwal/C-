#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Defining a vector
    std::vector<int> vectorInt;

    //Defining an iterator
    std::vector<int>::iterator it;

    //Vector with the initial size.
    cout<<"VectorInts has "<<vectorInt.size()<<" elements\n";

    //assigning the 4 values to the vector.
    //vector.assign(shape, value)
    vectorInt.assign(4, 3);
    cout<<"vectorInt has "<<vectorInt.size()<<" elements\n\n";

    //printing the contents of the vector using an iterator.
    cout<<"VectorInt has these elements: \n";
    for(it=vectorInt.begin(); it!=vectorInt.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<"\n\n";
    return 0;

}