//Problem 24 Lexicographic permutations

#include <iostream>
using namespace std;

// Print the next permutation and count
int permutation_count = 0;

void print(const int *v, const int size)
{
    permutation_count++;
    
    if ( permutation_count == 1000000 )
    {
        cout << "\nThe millionth permutation is: ";
        
        for (int i = 0; i < size; i++) {
            cout << v[i] ;
        }
        cout << endl;
        
    }
    
}

// Swap the value of a[k] with that of a[l]
void swap(int *v, const int i, const int j)
{
    int t;
    t = v[i];
    v[i] = v[j];
    v[j] = t;
}

//Reverse sequence from a[k + 1] up to and including the final element a[n]
void rotateLeft(int *v, const int start, const int n)
{
    int tmp = v[start];
    for (int i = start; i < n-1; i++) {
        v[i] = v[i+1];
    }
    v[n-1] = tmp;
}

//Recursive function of permutation

void permute(int *v, const int start, const int n)
{
    print(v, n);
    //Find  the largest index k such that a[k]<a[k+1]
    if (start < n) {
        int i, j;
        //Find the largest index l greater than k such that a[k]<a[l]
        for (i = n-2; i >= start; i--) {
            for (j = i + 1; j < n; j++) {
                swap(v, i, j);
                permute(v, i+1, n);
            } // for j
            rotateLeft(v, i, n);
        } // for i
    }
}

//Set up set of numbers {0,1,2,3,4,5,6,7,8,9}
void init(int *v, int N)
{
    for (int i = 0; i < N; i++) {
        v[i] = i;
    }
}


int main()
{
    int N = 10;
    int *v = new int[N];
    init(v, N);
    permute(v, 0, N);
    delete [] v;
    return 0;
}
