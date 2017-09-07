//Problem 39 Integer right triangles

#include <iostream>

using namespace std;

int count_pyth(int p)
{
    int n = 0;
    int p1 = p/3;
    int p2 = p/2;
    
    for(int a = 1; a < p1; a++)
    {
        for(int b = p2-a; b < p2; b++)
        {
            int c = p-a-b;
            
            if(a*a+b*b == c*c)
            {
                n++;
            }
        }
    }
    
    return n;
    
}



int main()
{
    int p,max,max_perimeter;
    max = 0;
    
    for(int i = 120; i < 1000; i++)
    {
        max_perimeter = count_pyth(i);
        
        if(max_perimeter > max)
        {
            max = max_perimeter;
            p   = i;
        }
    }
   
    cout << "The maximum perimeter less than 1000 which has maximum pythagorian triangles is " << p << endl;
    
    return 0;
}

