//Problem 25 1000-digit Fibonacci number

#include <iostream>
#include <cmath>
using namespace std;

//Define how to calculate number of digits
int num_of_digits(long double n)
{
    return floor(log10(n))+1;
}

int main()
{
    long double n0=1;
    long double n1=1;
    long double nxt=n0+n1;
    
    //Start from 3rd index of Fibonacci number 1,1,2
    int index = 3;
   
    while(num_of_digits(nxt)!=1000)
    {
        //Fibonacci number
        n0=n1;
        n1=nxt;
        nxt=n0+n1;
        index++;
    }
    //Print first 1000th Fibonacci number
    cout << index << endl;
    
    
    return 0;
}
