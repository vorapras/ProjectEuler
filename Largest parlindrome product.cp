// Problem 4 Largest palindrome product

#include <iostream>
#include <sstream>  // Required for stringstreams
#include <string>

using namespace std;

string IntToString ( int number )
{
    ostringstream oss;
    // Works just like cout
    oss<< number;
    // Return the underlying string
    return oss.str();
}

int main()
{
    int result = 0;
    int max = 0;
    string text;
    
    for(int j = 100 ; j <= 999 ; j++){
        for(int i = 100 ; i <= 999 ;i++){
            result = i*j;
            text = IntToString(result);
            if(text[0]==text[5]&&text[1]==text[4]&&text[2]==text[3]){
                if(result > max){
                    max = result;
                    cout << "i = " << i << "  j = " << j << endl;
                    cout << "The maximum parindome product is " << max << endl;
                }
            }
        }
    }
    return 0;
}
