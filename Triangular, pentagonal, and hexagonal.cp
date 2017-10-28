//Problem 45 Triangular, pentagonal, and hexagonal

#include <iostream>
#include <cmath>

using namespace std;

bool isPentagonal(long number)
{
    double penTest = (sqrt(1 + 24 * number) + 1.0) / 6.0;
    // Check that it is a pentagon number
    if(penTest == (int)penTest)
    {
        return true;
    }
    return false;
}


int main()
{
    long result = 0;
    int i = 143;
    
    while(true)
    {
        i++;
        result = i*(2*i-1);
        if(isPentagonal(result))
        {
            cout << "The next triangonal,pentagonal and hexagonal number is " << result << endl;
            break;
        }
    }
    
    return 0;
}

