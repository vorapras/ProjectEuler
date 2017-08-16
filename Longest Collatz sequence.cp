// Problem 14 Longest Collatz sequence

#include <iostream>
using namespace std;

// Define Collatz Sequence
int collatz(int n){
    int count = 0;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
        count++;
    }
    return count+1;
}


int main() {
    int max = 0;
    int result = 0;
    //Find the longest chain
    for(int i=1;i<=1000000;i++)
    {
        if(collatz(i)>max)
        {
            max = collatz(i);
            result = i;
        }
    }
    //Print final result
    cout << result<<endl;
    
    return 0;
}
