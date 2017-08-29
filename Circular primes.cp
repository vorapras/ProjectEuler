//Problem 35 Circular Primes

#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n)
{
    if(1 == n)
    {
        return false;
    }
    if(n < 4)
    {
        return true;
    }
    if((n % 2 == 0) || (n % 3 == 0) || (n < 0))
    {
        return false;
    }
    
    int sqroot = sqrt(n);
    for(int i = 4; i <= sqroot; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

void rotate_left(int *n)
{
    if(*n >= 10)
    {
        char temp, _n[7+1];
        sprintf(_n, "%d", *n);
        memcpy(&temp, _n + strlen(_n) - 1, 1);
        memmove(_n + 1, _n, strlen(_n) - 1);
        memmove(_n, &temp, 1);
        
        *n = atoi(_n);
    }
}

bool is_circular(int n)
{
    if(!is_prime(n))
    {
        return false;
    }
    
    for(int i = 0; i < (int)log10(n); i++)
    {
        rotate_left(&n);
        if(!is_prime(n))
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    int count = 0;
    for(int i = 1; i < 1000000; i++)
    {
        if(is_circular(i))
        {
            cout << i << endl;
            count++;
        }
    }
    
    cout << "There are " << count << " circular primes number." << endl;
    
    return 0;
}






