//Problem 34 Digit Factorials

#include <iostream>
#include <string>

using namespace std;

long factorial(long n)
{
    long sum = 1;
    for(long i=1; i<=n ;i++)
    {
        sum*=i;
    }
    return sum;
}
    


long sum_fact(long n)
{
    string num_string = to_string(n);
    int len = num_string.length();
    int sum = 0;
    
    for(int i=0; i < len; i++)
    {
        sum+=factorial(static_cast<long>(num_string[i]-'0'));
    }
    return sum;
  
}



int main()
{
    long upperbound = 1854721;
    long result = 0;
    
    for(long i=3; i<= upperbound ;i++)
    {
        if(sum_fact(i)==i)
        {
            cout << i << endl;
            result+=i;
        }
    }
    
    cout << result << endl;
    return 0;
}
