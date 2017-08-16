//Problem 21 Amicable numbers

#include <iostream>
using namespace std;

//Define summation of proper divisor function
int sumOf_proper_divisor(int n)
{
    int result = 0;
    
    for(int i=1;i<=(n/2)+1;i++)
    {
        if(n%i==0)
        {
            result+=i;
        }
    }
    return result;
}



int main () {
    
    int sum=0;
    int k=1;
    while(k<=10000)
    {
        if(sumOf_proper_divisor(k)!=k & sumOf_proper_divisor(sumOf_proper_divisor(k))==k)
        {
            sum+=k;
        }
        k++;
    }
    cout << "Sum of all amicable numbers under 10000 = " << sum << endl;
    return 0;
    
}
