// Problem 5 Smallest multiple

#include <iostream>

using namespace std;


int main()
{
    int n = 20;
    int minval = n;
    
    while(true){
        int check = 0;
        for(int i = 2; i <= n ;i++){
            if(minval%i != 0){
                check = 1;
            }
        }
        
        if(check == 1){
            minval+=n;
        }
        else if(check == 0){
            cout << minval << endl;
            break;
        }
    }
    return 0;
}
