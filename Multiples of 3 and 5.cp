// Problem 1 Multiples of 3 and 5

#include <iostream>

using namespace std;

int main() {
    
    int sum = 0;
    for(int i = 1; i < 1000; i++){
        if(i%3 == 0 || i%5 == 0){
            //cout << i << endl;
            sum = sum+i;
        }
    }
    cout << sum << endl;
    return 0;
}
