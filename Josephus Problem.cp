// Josephus Problem
//https://sites.google.com/site/spaceofjameschen/home/array/josephus-problem
#include<iostream>
#include<cmath>


using namespace std;


int main()
{
    int number_player = 100;
    int winning_player = 0;
    
    // By Josephus Formula
    winning_player = 2*(number_player-pow(2,floor(log2(number_player))))+1;
    
    cout << winning_player << endl;
    return 0;
}

