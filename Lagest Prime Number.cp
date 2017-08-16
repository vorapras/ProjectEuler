// Problem 3 Largest Prime Number

#include <iostream>

using namespace std;

// Define is Prime Function
bool isPrime(long n){
    int count = 0;
    for(long i = 2 ; i <=n ;i++){
        if(n%i==0){
            count+=1;
        }
    }
    if(count>1){
        return false;
    }
    else{
        return true;
    }
}


int main() {
    
    long n = 600851475143;
    
    // Print all largest Prime Number
    for(long i = 2 ;i < n; i++){
        if(n%i==0 && isPrime(i)==1){
            cout << i << endl;
        }
    }
    return 0;
}
