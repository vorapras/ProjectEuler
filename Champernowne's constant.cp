//Problem 40 Champernowne's constant

#include <iostream>
#include <string>


using namespace std;


int main()
{
   string champer = "1";
   int i = 2;
   while(i<=1000000)
   {
       champer += to_string(i);
       i++;
   }
   
    string str_result = champer.substr(0,1)+champer.substr(9,1)+champer.substr(99,1)+champer.substr(999,1)
                        +champer.substr(9999,1)+champer.substr(99999,1)+champer.substr(999999,1);
    
    cout << str_result << endl;
    

    int result = stoi(champer.substr(0,1))*stoi(champer.substr(9,1))*stoi(champer.substr(99,1))*stoi(champer.substr(999,1))
                 *stoi(champer.substr(9999,1))*stoi(champer.substr(99999,1))*stoi(champer.substr(999999,1));
    
    cout << result << endl;
    
    
    return 0;
}

