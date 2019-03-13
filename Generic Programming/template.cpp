#include "templateexample.hpp"

int main()
{
    int a,b;
    float c,d;
    char e,f;
    std::cout<<"Enter the first number: "<<endl;
    cin>>a;
    std::cout<<"Enter the second number: "<<endl;
    cin>>b;

    std::cout<<"Enter the first float: "<<endl;
    cin>>c;
    std::cout<<"Enter the second number: "<<endl;
    cin>>d;

    std::cout<<"Enter the first char: "<<endl;
    cin>>e;
    std::cout<<"Enter the second char: "<<endl;
    cin>>f;

    //Using a template function to overload the same function for different variable type.
    cout<<"Smaller is: "<<findsmaller(a,b)<<endl;
    cout<<"Smaller is: "<<findsmaller(c,d)<<endl;
    cout<<"Smaller is: "<<findsmaller(e,f)<<endl;

    return 0;

    
}