//Problem 24 Lexicographic permutations

#include <iostream>
using namespace std;

//Find  the largest index k such that a[k]<a[k+1]
int index_k(int *arr, int size)
{
    int max_k=0;
    for(int k=0;k<size;k++)
    {
        if(arr[k]<arr[k+1] && k>max_k)
        {
            max_k=k;
        }
        else
        {
            break;
        }
    }
    return max_k;
    
}

//Find the largest index l greater than k such that a[k]<a[l]
int index_l(int *arr, int k, int size)
{
    int max_l=0;
    for(int i=k;i<size;i++)
    {
        if(arr[k]<arr[i] && i>max_l)
        {
            max_l=i;
        }
    }
    return max_l;
    
}

// Swap the value of a[k] with that of a[l]
void swap(int *arr, int k, int l)
{
    int temp;
    temp = arr[k];
    arr[k] = arr[l];
    arr[l] = temp;
}

//Reverse sequence from a[k + 1] up to and including the final element a[n]
void reverse(int *arr,int k,int size)
{
        for(int j=k+1;j<size;j++)
        {
            arr[j]=arr[size-(j-1)];
        }
}


int main()
{
    int n=4;
    int *v = new int [n];
    for(int i=0;i<n;i++)
    {
        v[i]=i+1;
    }
    
    
    
    return 0;
}
