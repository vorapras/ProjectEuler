// Sorting Algorithm

#include <iostream>

using namespace std;

//Bubble Sort
void BubbleSort(int arr[],int n)
{
    for(int j = 0; j < n-1; j++)
    {
        for(int i = 0; i < n-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

//Selection Sort
void SelectionSort(int arr[],int n)
{
    for(int j = 0; j < n; j++)
    {
        int last = n-j-1;
        int max_index = 0;
        int max = INT_MIN;
        for(int i = 0; i <= last; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
                max_index = i;
            }
        }
        
        int temp = arr[last];
        arr[last] = max;
        arr[max_index] = temp;
    }
}

//Insertion Sort
void InsertionSort(int arr[],int n)
{
    for(int i = 0; i < n; i++)
    {
        int j;
        int temp = arr[i];
        for(j = i-1; j >= 0; j--)
        {
            if(temp > arr[j])
            {
                break;
            }
            arr[j+1] = arr[j]; // Shift
        }
        arr[j+1] = temp;
    }
}

// Merge Sort
void MergeSort(int arr[], int l, int r)
{
   // l is for left index and r is right index of the sub-array of arr to be sorted
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for large l and h
        int m = l+(r-l)/2;
        
        // Sort first and second halves
        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);
        
        
        // Merges two subarrays of arr[].
        // First subarray is arr[l..m]
        // Second subarray is arr[m+1..r]
        int i, j, k;
        int n1 = m - l + 1;
        int n2 =  r - m;
        
        // Create temp arrays
        int L[n1], R[n2];
        
        // Copy data to temp arrays L[] and R[]
        for (i = 0; i < n1; i++)
        {
            L[i] = arr[l + i];
        }
        for (j = 0; j < n2; j++)
        {
            R[j] = arr[m + 1+ j];
        }
        
        // Merge the temp arrays back into arr[l..r]
        i = 0; // Initial index of first subarray
        j = 0; // Initial index of second subarray
        k = l; // Initial index of merged subarray
        
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        
        // Copy the remaining elements of L[], if there are any
        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }
        
        // Copy the remaining elements of R[], if there are any
        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }

    }
}

// Quick Sort
void QuickSort(int arr[], int l, int r)
{
    if(l < r)
    {
        int temp = arr[l];
        int i = l;
        int j = r + 1;
        
        while(i < j)
        {
            do
            {
                j--;
            } while(temp < arr[j]);
            i++;
            while(arr[i] < temp)
            {
                if(i == r)
                {
                    break;
                }
                i++;
            }
            if(i < j)
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
        
        int t2 = arr[j];
        arr[j] = arr[l];
        arr[l] = t2;
        
        QuickSort(arr, l, j - 1);
        QuickSort(arr, j + 1, r);
        
    }
}

//Print Array Function
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << "\t";
    }
}

// Testing result on main function
int main()
{
    //Bubble Sort
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Bubble Sort Algorithm" << endl;
    BubbleSort(arr, n);
    printArray(arr,n);
    cout << endl;
    
    //Selection Sort
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    n = sizeof(arr2)/sizeof(arr2[0]);
    cout << "Selection Sort Algorithm" << endl;
    SelectionSort(arr2, n);
    printArray(arr2,n);
    cout << endl;
    
    //Insertion Sort
    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
    n = sizeof(arr3)/sizeof(arr3[0]);
    cout << "Insertion Sort Algorithm" << endl;
    InsertionSort(arr3, n);
    printArray(arr3,n);
    cout << endl;
    
    //Merge Sort
    int arr4[] = {64, 34, 25, 12, 22, 11, 90};
    n = sizeof(arr4)/sizeof(arr4[0]);
    cout << "Merge Sort Algorithm" << endl;
    MergeSort(arr4, 0, n-1);
    printArray(arr4,n);
    cout << endl;
    
    //Quick Sort
    int arr5[] = {64, 34, 25, 12, 22, 11, 90};
    n = sizeof(arr5)/sizeof(arr5[0]);
    cout << "Quick Sort Algorithm" << endl;
    MergeSort(arr5, 0, n-1);
    printArray(arr5,n);
    cout << endl;
    
    
    return 0;
}

