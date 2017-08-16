// Problem 16 Power digit sum

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    //Desired number
    long double number = pow(2,1000);
    cout << number << endl;
    //Convert into string
    string num_string;
    num_string = to_string(number);
    //Print string number
    cout << num_string <<endl;
    int len = num_string.length()-7;
    cout << len << endl;
    int sum = 0;
    //Find digit sum
    for (int i = 0; i < len; i++) {
        sum+=static_cast<int>(num_string[i]-'0');
    }
    //Print final sum
    cout << "The power digit sum = " << sum << endl;
    return 0;
}
