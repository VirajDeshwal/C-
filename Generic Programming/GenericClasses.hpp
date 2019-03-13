/*header file*/
#include <iostream>
using namespace std;

template<class T>
class Multiplier
{
    T m1, m2;
    T product;
    
    public:
            //SET function
            void setM1(T mIn);
            void setM2(T mIn);
            void setProduct();
            void printEquation();
            T getM1();
            T getM2();
            T getProduct();
            
            
};

//Definition of SET function
template <class T>
void Multiplier<T>::setM1(T mIn)
{
    m1 = mIn;
}
template <class T>
void Multiplier<T>::setM2(T mIn)
{
    m2 = mIn;
}

template <class T>
void Multiplier<T>::setProduct()
{
    product = m1*m2;
}

template <class T>
void Multiplier<T>::printEquation()
{
    std::cout<<m1<<" * "<<m2<<" = "<<product;
}


//Defintion of GET functions

template <class T>
T Multiplier<T>::getM1()
{
    return m1;
}

template <class T>
T Multiplier<T>::getM2()
{
    return m2;
}

template <class T>
T Multiplier<T>::getProduct()
{
    return product;
}
