//Problem 23 Non-abundant sums

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Define summation of proper divisor function
int sumOf_proper_divisor(int n)
{
    int result = 0;
    
    for(int i=1;i<=(n/2)+1;i++)
    {
        if(n%i==0)
        {
            result+=i;
        }
    }
    return result;
}

int main() {
    //Create ArrayList/Vector
    vector<int> abundant_num;
    vector<int> sum_abundant_num;
    
    //Start with smallest abundant number = 12
    for(int i=12;i<=28123;i++)
    {
        if(i<sumOf_proper_divisor(i))
        {
            abundant_num.push_back(i);
        }
    }
    
    //Find summation of every possibilities of abundant summation
    for(auto x:abundant_num)
    {
        for(auto y:abundant_num)
        {
            if(x+y<=28123)
            sum_abundant_num.push_back(x+y);
        }
    }
    
    //All summation below than 28123
    int all_sum = 28123*28124/2;
    int new_sum=0;
    
    //Sorting all values in the set
    sort(sum_abundant_num.begin(),sum_abundant_num.end());
    //Remove repeated numbers
    sum_abundant_num.erase(unique(sum_abundant_num.begin(),sum_abundant_num.end()),sum_abundant_num.end());
    
    // Sum all of unique sumOfabundantNumbers
    for(auto z:sum_abundant_num)
    {
        new_sum+=z;
    }
    
    cout << all_sum-new_sum << endl;
    
    return 0;
}
