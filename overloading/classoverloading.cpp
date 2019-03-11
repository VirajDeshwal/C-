#include"classoverloading.hpp"

int main()
{
    const int SIZE=5;
    //Defining an object for the class
    Comparision c;
    int a, b;
    float d,e;
    char f,g;
    int arrayInt[5];
    float arrayFloat[5];
    char arrayChar[5];

    std::cout<<"Enter the first number:\n";
    std::cin>>a;
    std::cout<<"Enter the second number:\n";
    std::cin>>b;

    std::cout<<"Enter the first float:\n";
    std::cin>>d;
    std::cout<<"Enter the second float:\n";
    std::cin>>e;

    std::cout<<"Enter the first char:\n";
    std::cin>>f;
    std::cout<<"Enter the second char:\n";
    std::cin>>g;

    for (int i=0; i<SIZE; i++)
    {
        std::cout<<"Enter the "<<i<< " number "<<"\n";
        std::cin>>arrayInt[i];    
    }

    for(int i=0; i<SIZE; i++)
    {
        std::cout<<"Enter the "<<i<< " float number "<<"\n";
        std::cin>>arrayFloat[i];
    }

    for (int i=0; i<SIZE; i++)
    {
        std::cout<<"Enter the "<<i<<" character "<<"\n";
        std::cin>>arrayChar[i];
    }

    //Calling the methods from class using object method

    std::cout<<c.compare(a, b)<<" is the smaller in "<<a<<" and "<<b<<"\n";
    std::cout<<c.compare(d, e)<<" is the smaller in "<<d<<" and "<<e<<"\n";
    std::cout<<c.compare(f, g)<<" is the smaller in "<<f<<" and "<<g<<"\n";
    std::cout<<c.compare(arrayInt, 5)<<" is the smallest of the input array\n";
    std::cout<<c.compare(arrayFloat, 4)<<" is the smallest of the input array\n";
    std::cout<<c.compare(arrayChar, 6)<<" is the smallest of the input array\n";


    return 0;
}