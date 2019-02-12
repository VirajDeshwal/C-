
#include <iostream>

using namespace std;

int main()
{
    float int1; 
    float int2;
    int operationChoice;
    std::cout<<"Enter two numbers:\n";
    std::cin>>int1;
    std::cin>>int2;
    std::cout<<"Enter the operation\n";
    std::cout<<"1.Add\n2.subtract\n3.multiply\n4.divide\n";
    std::cin>>operationChoice;
    
    switch (operationChoice){
        case(1): std::cout<< int1 + int2<<endl;
        break;
        case(2): std::cout<< int1 - int2<<endl;
        break;
        case(3): std::cout<< int1*int2<<endl;
        break;
        case(4): std::cout<< int1/int2<<endl;
        break;
        
        default: std::cout <<"This is not a valid entry\n";
        
        
    }
    
    
    return 0;
}