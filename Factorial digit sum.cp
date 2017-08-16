// Problem 20 Factorial digit sum

#include <iostream>
#include <string>

using namespace std;

long double factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}


int main() {
    //Desired number
    long double number = factorial(100);
    //Convert into string
    string num_string;
    num_string = to_string(number);
    //Print string number
    cout << num_string <<endl;
    int len = num_string.length()-7;
    int sum = 0;
    //Find digit sum
    for (int i = 0; i < len; i++) {
        sum+=static_cast<int>(num_string[i]-'0');
    }
    //Print final sum
    cout << "The factorial digit sum = " << sum << endl;
    return 0;

}
