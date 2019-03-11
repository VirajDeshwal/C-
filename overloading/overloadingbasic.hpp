#include<iostream>
using namespace std;


//Definition of the function
int findsmaller(int input1, int input2);
float findsmaller(float input1, float input2);
char findsmaller(char input1, char input2);


//Describing the function
int findsmaller(int input1, int input2)
{
  if(input1<input2)
  {
    return input1;
  }
  return input2;
}

float findsmaller(float input1, float input2)
{
  if(input1<input2)
  {
    return input1;
  }
  return input2;
}

char findsmaller(char input1, char input2)
{
if (input1 < input2)
{
  return input1;
}
return input2;
}