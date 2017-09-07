//Problem 42 Coded triangle numbers

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;

bool isTriangle(int n)
{
    double x = sqrt(1+8*n);
    
    if(x == (int)x)
    {
        return true;
    }
    return false;
}

int wordvalues(string s)
{
    int sum = 0;
    for(int i = 0; i < s.size() ;i++)
    {
        sum += s.at(i)-64;
    }
    return sum;
}


int main()
{
    vector<string> words;
    ifstream wordsFile("/Users/ZerWinner/Desktop/p042_words.txt");
    
    char curChar;
    string curWord = "";
    
    //get names from file
    if(wordsFile.is_open()) {
        while(!wordsFile.eof()) {
            curChar = wordsFile.get();
            
            if(isalpha(curChar))
                curWord.push_back(curChar);
            else {
                if(!curWord.empty())
                {
                    //store finished name
                    words.push_back(curWord);
                    curWord.clear();
                }
            }
        }
    }
    wordsFile.close();
    
    //alphabetize
    sort(words.begin(), words.end());
    
    int count = 0;
    
    for(int i = 0 ; i < words.size() ;i++)
    {
        if(isTriangle(wordvalues(words[i])))
        {
            cout << words[i] << endl;
            count++;
        }
    }
    
    cout << "There are " << count << " triangle words." << endl;
    
    return 0;
}

