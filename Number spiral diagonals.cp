//Problem 28 Number spiral diagonals

#include <iostream>
using namespace std;

int main()
{
    int dim = (1001+1)/2;
    int x = 1;
    int incr = 0;
    int result = 1;
    
    for(int i = 2; i <= dim ; i++)
    {
        incr = incr+2;
        for(int j = 0;j < 4; j++)
        {
            x = x+incr;
            result = result+x;
        }
    }
    cout << result << endl;
    
    return 0;
}
