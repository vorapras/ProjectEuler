// Problem 15 Lattice Path

#include <iostream>
#include <cmath>
using namespace std;

// Lattice Path Recursive Function
//int lattice_path(int m,int n){
  //  if(m==0 ||n==0)
    //{
      //  return 1;
    //}
    //else
    //{
      //  return lattice_path(m-1,n)+lattice_path(m,n-1);
    //}
//}

//Factorial function
long double fact(int n)
{
long double result=1;
for(int i=1 ; i<=n ;i++)
{
  result *= i;
}
  return result;
}


int main() {
    //Print result
    int n=20;
    //cout << lattice_path(n,n)<<endl;
    //By Combunatoric Formula
    cout << static_cast<long int>(fact(2*n)/pow(fact(n),2)) <<endl;
    return 0;
}
