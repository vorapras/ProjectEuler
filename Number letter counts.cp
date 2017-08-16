// Problem 17 Number letter counts

#include <iostream>
#include <string>
using namespace std;

// Define number to word lengths
int num_to_word(int n,int result = 0){
    // Set up all base numbers
    string twentystr[20] = {"zero","one","two","three","four","five","six","seven","eight","nine",
        "ten","eleven","tweleve","thirteen","fourteen","fifteen","sixteen",
        "seventeen","eightteen","nineteen"};
    string tenthstr[8] = {"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    //Put length of each first 20 numbers in words in arrays
    int twentyint[20];
    for(int i=0;i<20;i++)
    {
        if(i==0)
        {
            twentyint[i]=0;
        }
        else
        {
            twentyint[i]=twentystr[i].length();
        }
    }
    //Put length of each ty digit in words in arrays
    int tenthint[8];
    for(int i=0;i<8;i++)
    {
        tenthint[i]=tenthstr[i].length();
        //cout << d2[i] <<endl;
    }
    
    //Define Function
    if(n<20)
    {
        result+=twentyint[n];
        return result;
    }
    else if(n<100)
    {
        result+=tenthint[(n/10)-2];
        return num_to_word(n%10,result);
    }
    else if(n<1000)
    {
        result+=twentyint[n/100];
        string hundred = "hundred";
        result+=hundred.length();
        if(n%100==0)
        {
            return result;
        }
        else
        {
            string And = "and";
            result+=And.length();
            return num_to_word(n%100,result);
        }
    }
    else if(n==1000)
    {
        string onethousand = "onethousand";
        return onethousand.length();
    }
    return result;
}


int main() {
    int sum=0;
    for(int i = 1; i<=1000;i++)
    {
        sum+=num_to_word(i);
    }
    cout << sum << endl;
    return 0;
}
