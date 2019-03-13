#include <iostream>
using namespace std;

//Using two different function types.
template <typename T, typename U>

T getbigger(T input1, U input2)
{
    if(input1< input2)
        return input2;
    return input1;
}