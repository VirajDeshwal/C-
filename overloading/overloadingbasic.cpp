#include"overloadingbasic.hpp"

int main()
{
  int a , b;
  float c ,d;
  char e,f;

  std::cout<<"Enter the first number:\n";
  std::cin>>a;

  std::cout<<"Enter the second number:\n";
  std::cin>>b;

  std::cout<<"Enter the first float:\n";
  std::cin>>c;

  std::cout<<"Enter the second float:\n";
  std::cin>>d;

  std::cout<<"Enter the first char:\n";
  std::cin>>e;

  std::cout<<"Enter the second char:\n";
  std::cin>>f;


  //Calling the functions
std::cout<< findsmaller(a,b)<<" is the smaller of "<< a <<" and "<< b <<"\n";
std::cout<<findsmaller(c,d)<<" is the smaller of "<<c<<" and "<<d<<"\n";
std::cout<<findsmaller(e,f)<<" is the smaller of "<< e <<" and "<<f<<"\n";

return 0;
}
