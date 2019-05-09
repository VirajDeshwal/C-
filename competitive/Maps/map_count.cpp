#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main()
{
    map<int, int> mp;
    map<int, int>::iterator itr;

   mp.insert(pair<int, int>(10,1));
   mp.insert(pair<int, int>(20,2));
   mp.insert(pair<int, int>(30,3));
   mp.insert(pair<int, int>(40,4));

   //check it the key is already in Map
   int key;
   cout<<"Enter the number: ";
   cin>>key;

  itr = mp.find(key);
  if(itr == mp.end())
  {
      cout<<"Key Not Found.\n";
  }
  else
  {
      cout<<"Key found at "<<itr->second;
  }
  
 
return 0;

}