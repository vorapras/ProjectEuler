//Problem 26 Reciprocal cycles

#include <iostream>
#include <vector>
using namespace std;

//Define how to find length of reciprocal cycle
int cycleLength(int x)
{
       //Invalid number
       if(x == 0)
       {
        return 0;
       }
        //[remainder]->[pos]
        int NotSeenYet = 0;
        vector<int> lastPos(x,NotSeenYet);
        
        //Start at first digit after the decimal dot
        int position = 1;
        int dividend = 1;
        
        while(true)
        {
            int remainder = dividend % x;
            
            //No remainder return 0
            if(remainder == 0)
            {
                return 0;
            }
            
            //Check if the remainder is repeated or not?
            if(lastPos[remainder] != NotSeenYet)
            {
                //Length of recurring cycle
                return position-lastPos[remainder];
            }
            
            //Remember position of current remainder
            lastPos[remainder]=position;
            
            //Next step
            position++;
            dividend = remainder*10;
        }
}


int main()
{
    int maxDenominator = 1000;
    int longestDenominator = 0;
    int longestCycle = 0;
    
    for(int denominator = 1; denominator <= maxDenominator;denominator++)
    {
        int length = cycleLength(denominator);
        if(longestCycle < length)
        {
            longestCycle = length;
            longestDenominator = denominator;
        }
    }
    
    cout << "The longest reciprocal cycle is = " << longestDenominator << endl;
    
    return 0;
}
