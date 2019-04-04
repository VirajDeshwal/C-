#include<vector>
#include<cstdlib>
#include<iostream>
using namespace std;

long long fast_sol(const vector<int> &numbers);
long long slow_sol(const vector<int> &numbers);

int main()
{

    
while(true)
{
    int n = rand() % 1000 + 2; // random size of a list between 2 to 6.
    cout <<n<<"\n";
    vector<int> a ; // defining a vector for the memory allocation of the stack.
    for (int i=0; i<n; ++i)
    {
        a.push_back(rand() % 1000 ); // Pushing the random numbers between 0 to 9 into stack.
    }
    for(int i=0; i<n; ++i)
    {
        cout<<a[i]<< " "; // printing the numbers from stack.
    }
    cout<<" \n "; //new line after every list.

    //Defining the test case
    long long result1 = fast_sol(a);
    long long result2 = slow_sol(a);
    if(result1 != result2)
    {
        cout << "Error: "<< result1 << "  "<< result2; 
        break;
    }
    else
    {
        cout<<"Working!\n";
    }
    
    

}
return 0;
}

long long fast_sol(const vector<int> &numbers)
{
    int n = numbers.size();
    long long result = 0;
    int max1 = -1;

    for(int i=0; i<n; ++i)
    {
        if((max1 ==-1) || (numbers[i]> numbers[max1]))
        {
            max1 = i;
        }
    }
    int  max2 = -1;
    for(int j=0; j<n; ++j)
    {
       // if((numbers[j] != numbers[max1]) && ((max2 == -1) || (numbers[j] > numbers[max2]))) 
       /* The above line is comparing the max number 2nd from the max number 1 and producing an error. */
       if((j != max1) && ((max2 == -1) || (numbers[j]> numbers[max2])))
        {
            max2 = j;
        }
    }
    return ((long long ) numbers[max2]) * numbers[max1];
}

long long slow_sol(const vector<int> &numbers)
{
    long long result = 0;
    int n = numbers.size();
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if((long long)(numbers[i]) * numbers[j] > result)
            {
                result = ((long long) (numbers[i])) * numbers[j];
            }
        }
    }
    return result;
}