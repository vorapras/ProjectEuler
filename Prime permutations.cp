//Problem 49 Prime permutations

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> ESieve(int lowerlimit,int upperlimit)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[upperlimit+1];
    memset(prime, true, sizeof(prime));
    
    for (int p=2; p*p<=upperlimit; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=upperlimit; i += p)
            {
                prime[i] = false;
            }
        }
    }
    vector<int> arr;
    // Print all prime numbers
    for (int p=2; p<=upperlimit; p++)
    {
        if (prime[p] && p > lowerlimit)
        {
            arr.push_back(p);
        }
    }
    return arr;
}

bool isPerm(int m,int n)
{
    int arr[10];
    int temp = n;
    while(temp > 0)
    {
        arr[temp % 10]++;
        temp /= 10;
    }
    
    temp = m;
    
    while(temp > 0)
    {
        arr[temp % 10]--;
        temp /= 10;
    }
    
    for(int i=0;i<10;i++)
    {
        if(arr[i] != 0)
        {
            return false;
        }
    }
    
    return true;
}

long concat(long a,long b)
{
    long c = b;
    while(c > 0)
    {
        a *= 10;
        c /= 10;
    }
    return a+b;
}


int main ()
{
    int upperlimit = 10000;
    long result = 0;
    vector<int> primes = ESieve(1489,upperlimit);
    
    for(int i=0;i < primes.size();i++)
    {
        for(int j=i+1; j < primes.size();j++)
        {
            int k = primes[j]+(primes[j]-primes[i]);
            if(k < upperlimit && binary_search(primes.begin(),primes.end(),k) >= 0)
            {
                if(isPerm(primes[i],primes[j]) && isPerm(primes[i],k))
                {
                    result = concat(concat(primes[i],primes[j]),k);
                    break;
                }
            }
        }
        if(result > 0)
        {
            cout << result << endl;
            break;
        }
    }
    
    return 0;
}
