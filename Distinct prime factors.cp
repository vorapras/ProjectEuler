//Problem 47 Distinct prime factors

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>


using namespace std;

bool isPrime(int x)
{
    for(int i = 2;i <= int(sqrt(x));i++)
    {
        if(x%i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> listOfProperDivisors(int n)
{
    vector<int> result;
    for(int i = 2;i <= int(sqrt(n));i++)
    {
        if(n%i == 0)
        {
            result.push_back(i);
            result.push_back(n/i);
        }
    }
    
    sort(result.begin(),result.end());
    result.erase(unique(result.begin(),result.end()),result.end());
    
    return result;
}

int numberOfprimeFactor(vector<int> result)
{
    int count = 0;
    for(auto i:result)
    {
       if(isPrime(i))
       {
           count++;
       }
    }
    return count;
}

int main()
{
    int ctr = 0;
    int exit = 0;
    int n = 2;
    
    while(true)
    {
        int num_prime = numberOfprimeFactor(listOfProperDivisors(n));
        while(num_prime == 4)
        {
            ctr++;
            if(ctr == 4)
            {
                exit = 1;
                break;
            }
            n++;
            num_prime = numberOfprimeFactor(listOfProperDivisors(n));
        }
        if(exit == 1)
        {
            break;
        }
        ctr = 0;
        n++;
    }
    
    cout << "The first four consecutive integers to have four distinct prime factors = " << n-4+1 << endl;
    return 0;
}
