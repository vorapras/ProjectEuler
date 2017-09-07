//Problem 41 Pandigital prime

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>


using namespace std;

bool isPrime(int n)
{
    if(n == 1)
    {
        return false;
    }
    
    for(int i = 2; i <= (int)sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPandigital(int n)
{
    bool stash[] = {true,true,true,true,true,true,true,true,true};
    int digit,i=0;
    while(n != 0)
    {
        digit = n % 10;
        if(digit == 0)
        {
            return false;
        }
        else
        {
            stash[digit-1] = false;
        }
        
        n /= 10;
        i++;
    }
    
    for(i = i-1; i >= 0; i--)
    {
        if(stash[i] != false)
        {
            return false;
        }
    }
    
    return true;
}



int main()
{
    int max_number = 0;
    
    for(int i = 1234; i <= 7654321; i++)
    {
        
        if(isPandigital(i) && isPrime(i))
        {
            if(i > max_number)
            {
                max_number = i;
            }
        }
    }
    
    cout << "The highest pandigital prime number is " << max_number << endl;
    
    return 0;
}

