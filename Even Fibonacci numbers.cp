// Problem 2 Even Fibonacci numbers

#include <iostream>

using namespace std;

int main() {
    
    int fib = 0,a = 0,b = 1,sum = 0;
    
    while(fib < 4000000){
        fib = a+b;
        a = b;
        b = fib;
        //cout << fib << endl;
        if(fib%2==0){sum+=fib;}
    }
    cout << sum << endl;
    return 0;
}
