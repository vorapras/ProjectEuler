// Problem 7 10001st Prime

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
    double n = 2;
    double i = 3;
    while(n!=10001){
        i+=2;
        if(isPrime(i)){
            n+=1;
            cout << i << endl;
        }
    }
    return 0;
}

