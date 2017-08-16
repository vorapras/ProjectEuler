// Problem 10 Summation of primes
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(double x)
{
    for(int i = 2 ; i<=static_cast<int>(sqrt(x))+1; i++)
    {
        if(static_cast<int>(x)%i == 0)
        {
            return false;
            break;
        }
        
    }
    return true;
}


int main()
{
    int sum = 2;
    
    for(int i = 3 ; i <= 2000000 ; i++)
    {
        double x = static_cast<double>(i);
        if(isPrime(x))
        {
            cout << x << endl;
            sum+=static_cast<double>(x);
        }
    }
    
    cout << "Sum of all primes =\t" << sum << endl;
    return 0;
}
