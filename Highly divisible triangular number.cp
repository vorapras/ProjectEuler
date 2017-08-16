// Problem 12 Highly divisible triangular number

#include<iostream>
#include<cmath>

using namespace std;


int NumOfDivisor(int number)
{
    int count = 0;
    int matsquare = (int)sqrt(number);
    
    for(int i = 1 ;i <= matsquare; i++)
    {
        if(number % i == 0)
        {
            count+=2;
        }
    }
    //Correction if the number is a perfect square
    if(matsquare * matsquare == number)
    {
        count--;
    }
    
    return count;
}

int main()
{
    int number = 0;
    int i = 1;
    
    while(NumOfDivisor(number) < 500)
    {
        number += i;
        i++;
    }
    cout << number << endl;
    
    return 0;
}
