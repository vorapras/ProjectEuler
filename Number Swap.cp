//Number Swap

#include <iostream>
#include <cmath>

using namespace std;

void swap(int &i,int &j)
{
    i=i+j;//store the sum of i and j
    j=i-j;//chnage j to i
    i=i-j;//change i to j
}

int oper(int a, int b)
{
    swap(a,b);
    int result = pow(a,b);
    return result;
}

int main()
{
    int a=2;
    int b=7;

    cout << oper(a,b) << endl;
   return 0;
}

