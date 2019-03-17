// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;
  vector<int>::iterator it;
  void printVector(vector<int> vIn);
  void assignFunction(vector<int> vInts, int in);
  void pushBackFunction(vector<int> vInts, int in);
  void emplaceFunction(vector<int> vInts, int loc, int in);
  
 void printVector(vector<int> vIn)
 {//printing the contents of vIns
  //TODO: Finish the function
  for(it=vIn.begin(); it!=vIn.end();++it)
  {
      cout<<*it<<" ";
  }
  cout<<"\n";
  
 }
 
  void assignFunction(vector<int> vInts, int in)
  {
      cout<<"\nassigning "<<in<<" and printing the vector\n";
      //TODO: Finish the function
      vInts.assign(1,in);
      printVector(vInts);
  }
  void pushBackFunction(vector<int> vInts, int in)
  {
      cout<<"\npush back "<<in<<" and printing the vector\n";
      //TODO: Finish the function
      vInts.push_back(in);
      printVector(vInts);
  }
  void emplaceFunction(vector<int> vInts,  int loc, int in)
  {
      vector<int>::iterator it;
      it = vInts.begin()+loc;
      cout<<"\nemplacing "<<in<<" and printing the vector\n";
      //TODO: Finish the function
      vInts.emplace(it, in);
      printVector(vInts);
  }