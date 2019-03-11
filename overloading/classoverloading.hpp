#include <iostream>

using namespace std;

class Comparision
{
    //Describing the methods of a class
    public: 
    int compare(int input1, int input2);
    float compare(float input1, float input2);
    char compare(char input1, char input2);
    int compare(int arrayInt[], int size);
    float compare(float arrayFloat[], int size);
    char compare(char arrayChar[], int size);

};

//Describing the methods of a class

int Comparision:: compare(int input1, int input2)
{
    if(input1 < input2)
    {
        return input1;
    }
    return input2;
}

float Comparision::compare(float input1, float input2)
{
    if(input1 < input2)
    {
        return input1;
    }
    return input2;
}

char Comparision::compare(char input1, char input2)
{
    if ( input1 < input2)
    {
        return input1;
    }
    return input2;
}

int Comparision::compare(int arrayInt[], int size)
{
    {
        for (int i=0;i<size;++i)
        {
            for(int j=0; j<size-i-1; ++j)
            {
                if(arrayInt[j]>arrayInt[j+1])
                {
                    int temp = arrayInt[j];
                    arrayInt[j] = arrayInt[j+1];
                    arrayInt[j+1] = temp;
                }
            }
        }
    }
    return arrayInt[0];
}

float Comparision::compare(float arrayFloat[], int size)
{
    {
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size - i - 1; ++j)
         if (arrayFloat[j] > arrayFloat[j + 1])
        {
          float temp = arrayFloat[j];
          arrayFloat[j] = arrayFloat[j + 1];
          arrayFloat[j + 1] = temp;
        }
  }        
    return arrayFloat[0];
}

char Comparision::compare(char arrayChar[], int size)
{
    {
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size - i - 1; ++j)
         if (arrayChar[j] > arrayChar[j + 1])
        {
          int temp = arrayChar[j];
          arrayChar[j] = arrayChar[j + 1];
          arrayChar[j + 1] = temp;
        }
  }        
    return arrayChar[0];
}