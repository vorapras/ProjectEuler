//Problem 36 Double-base palindromes

#include <iostream>
#include <cmath>

using namespace std;

bool IsPalindrome(int number,int base)
{
    int reversed = 0;
    int k = number;
    
    while(k > 0)
    {
        reversed = base*reversed + k%base;
        k /= base;
    }
    
    if(number == reversed)
    {
        return true;
    }
    else
    {
    return false;
    }
    
}

int main()
{
    int limit = 1000000;
    int result = 0;
    
    for(int i=1; i < limit; i+=2)
    {
        if(IsPalindrome(i,10) && IsPalindrome(i,2))
        {
            cout << i << endl;
            result+=i;
        }
    }
    
    cout << "The sum of palindromic numbers in base 2 and 10 are " << result << endl;
    
    return 0;
}






