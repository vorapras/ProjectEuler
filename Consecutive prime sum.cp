//Problem 50 Consecutive prime sum

#include <iostream>

using namespace std;

#define sz 1000001
#define hi 1001

bool prime[sz];
long primeTable[78500];
long nPrime = 0;

void sieve()
{
    int i,j;
    
    for( i=4; i < sz ;i += 2)
    {
        prime[i] = true;
    }
    
    primeTable[nPrime++] = 2;
    
    for( i=3; i <= hi;i += 2)
    {
        if(!prime[i])
        {
            primeTable[nPrime++] = i;
            for(j = i+i; j < sz; j += i)
            {
                prime[j] = true;
            }
        }
    }
    for( i= hi+2; i < sz; i += 2)
    {
        if(!prime[i])
        {
            primeTable[nPrime++] = i;
        }
    }
}


int main()
{
    long i,j,tmp,max,ans;
    
    sieve();
    
    max = ans = 0;
    for(i = 0; i < nPrime; i++)
    {
        tmp = 0;
        for(j = i; j < nPrime; j++)
        {
            tmp += primeTable[j];
            if( tmp >= sz)
            {
                //i = j-1;
                break;
            }
            
            if(!prime[tmp] && (j-i+1) > max)
            {
                max = j-i+1;
                ans = tmp;
            }
        }
    }
    
   cout << "The longest sum of consecutive primes below one-million that adds to a prime,contains " << max << " terms and is equal to " << ans << endl;
    
    return 0;
}
    
