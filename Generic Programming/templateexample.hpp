#include <iostream>
using namespace std;

template <typename T>

T findsmaller (T input1, T input2)
{
    if(input1 < input2)
        return input1;
    return input2;
}