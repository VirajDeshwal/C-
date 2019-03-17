#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //creating a vector of integers
    std::vector<int> vectorInts;
    std::cout<<"vectorInts has "<<vectorInts.size()<<" elements. \n";

    //Changing the size of the vectorInts to 6.
    vectorInts.resize(6);
    cout<<"\n\nvectorInts now has "<<vectorInts.size()<<" elements.\n\n";

    return 0;
}