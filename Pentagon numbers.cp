//Problem 44 Pentagon numbers

#include <iostream>
#include <cmath>

using namespace std;

bool isPentagonal(int number)
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
    int result = 0;
    bool notFound = true;
    int i = 1;
    int k = 0;
    
    // Loop to find the smallest difference
    while (notFound)
    {
        i++;
        int n = i * (3 * i - 1) / 2;
        
        //From  index 0 to i
        for (int j = i-1; j > 0; j--)
        {
            int m = j * (3 * j - 1) / 2;
            
            //Check if sum and diff are both pentagon numbers or not
            if (isPentagonal(n - m) && isPentagonal(n + m))
            {
                result = n-m;
                k = j;
                notFound = false;
                break;
            }
        }
    }
    
    cout << "i = " << i << endl;
    cout << "k = " << k << endl;
    cout << "The value of D is " << result << endl;
    
    return 0;
}

