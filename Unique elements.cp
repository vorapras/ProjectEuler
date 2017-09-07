//Unique elements

#include <iostream>
#include <vector>

using namespace std;

template <class T> vector<T> unique(T a[],int n)
{
    vector<int> vec; //vector to avoid resizing problem
    vec.reserve(n); //reserver to avoid reallocation
    vec.push_back(a[0]);
    
    for(int i=1;i<n;++i)
    {
        if(a[i] != a[i+1])
        {
            vec.push_back(a[i]);
        }
    }
    return vec;
}



int main()
{
    
    int arr[12] = {1,1,3,3,3,5,5,5,9,9,9,9};
    
    unique(arr,4);
    
    for(auto i:arr)
    {
        cout << arr[i] << endl;
    }
    
   
    return 0;
}

