//Problem 29 Digit fifth powers

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int sumsqrtDigit(int n)
{
    string num = to_string(n);
    int length = num.length();
    int arr[length];
    //Splitting number into array
    for(int i=length-1;i>=0;i--)
    {
        arr[i]=n%10;
        n/=10;
    }
    
    int sum=0;
    
    for(int i=0;i<length;i++)
    {
        sum+=pow(arr[i],5);
    }
    
    return sum;
}

int main()
{
    int sum = 0;
    
    for(int i=2;i<=999999;i++)
    {
    
        if(sumsqrtDigit(i)==i)
        {
            cout << i << endl;
            sum+=i;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
