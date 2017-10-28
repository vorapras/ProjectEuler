//Problem 48 Self powers

#include <iostream>

using namespace std;


int main ()
{
    long result = 0;
    long modulo = 10000000000;
    
    for(int i = 1;i <= 1000; i++)
    {
        long temp = i;
        for(int j = 1; j < i; j++)
        {
            temp *= i;
            temp %= modulo;
        }
        result += temp;
        result %= modulo;
    }
    
    cout << "The last ten digit of the series is " << result << endl;
    return 0;
}
