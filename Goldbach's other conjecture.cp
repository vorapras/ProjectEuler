//Problem 46 Goldbach's other conjecture

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x)
{
    for(int i = 2; i <= int(sqrt(x)); i++)
    {
        if(x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 3;
    
    while(true)
    {
        if(isPrime(n) == false)
        {
            int m = 1;
            int temp = n-2*m*m;
            int check = 0;
            while(temp > 0)
            {
                if(isPrime(temp))
                {
                    check = 1;
                    break;
                }
                m++;
                temp = n-2*m*m;
            }
            if(check == 0)
            {
                cout << n << endl;
                break;
            }
            
        }
        n+=2;
    }
    
    
    return 0;
}

