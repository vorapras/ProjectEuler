// Problem 29 Distinct powers

#include <iostream>
#include <cmath>
#include <set>

using namespace std;

int main() {
    
    int total_length = 0;
    
    // Initialise set function
    set<double> result;
    
    for(double a = 2; a <= 100;a++){
        for(double b = 2; b <= 100; b++){
            result.insert(pow(a,b));
        }
    }
    
    total_length = result.size();
    
    // Print each element
    // while(!result.empty())
    //{
    //cout << ' ' << *result.begin();
    // result.erase(result.begin());
    // }
    
    // cout << endl;
    
    // Print Final Result
    cout << "There are  " << total_length <<"  distinct numbers"<<endl;
    
    return 0;
}
