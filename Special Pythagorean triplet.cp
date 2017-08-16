// Problem 9 Special Pythagorean triplet


#include <iostream>
#include <cmath>

using namespace std;

double Pythagorean(int a,int b)
{
    double c = sqrt(a*a+b*b);
    return c;
}

int main()
{
    double k;
    for(int i = 1 ; i < 1000 ;i++){
        for(int j = i+1 ; j < 1000 ;j++)
        {
            k = Pythagorean(i,j);
            if(k == static_cast<int>(k))
            {
                int h = static_cast<int>(k);
                if(i+j+h == 1000)
                {
                    cout << "i = " << i << "\t j = " << j << "\t k = " << h << endl;
                    int product = i*j*h;
                    cout << "The product of triplet is " << product << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
