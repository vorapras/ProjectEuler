// Problem 6 Sum square difference

#include <iostream>

using namespace std;


int main()
{
    int n = 100;
    int sumsqr = (n*(n+1)*(2*n+1))/6;
    int sqrsum = ((n*(n+1))/2)*((n*(n+1))/2);
    
    cout << sqrsum-sumsqr << endl;
    return 0;
}
