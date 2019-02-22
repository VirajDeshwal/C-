# include "main.hpp"

int main()
{
    float m1, m2;

    //USER INPUT
    std::cout<<"Enter the first number: "<<endl;
    std::cin>>m1;
    std::cout<<"Enter the second number: "<<endl;
    std::cin>>m2;

    // Calling functions 

    //add
    std::cout<<m1<<"+"<<m2<<"="<<add(m1,m2)<<endl;

    //subtract
    std::cout<<m1<<"-"<<m2<<"="<<subtract(m1,m2)<<endl;

    // multiply
    std::cout<<m1<<"*"<<m2<<"="<<multiply(m1,m2)<<endl;

    //Divide
    std::cout<<m1<<"/"<<m2<<"="<<divide(m1,m2)<<endl;

    return 0;

}