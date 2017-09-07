//Problem 38 Pandigital Multiples

#include <iostream>
#include <string>

using namespace std;

int main()
{

int n = 9876, t;
int max = 0;

for (; n >= 9123; --n)
{
    string all, tmp;
    for (int i = 1; ; ++i)
    {
        t = n * i;
        all += to_string(t);
        tmp += to_string(t);
        if (all.size() > 9)
        {
            break;
        }
        sort(all.begin(), all.end());
        int j = 0;
        for (; all.size() == 9 && j < 9; ++j)
        {
            if (all[j] != '0' + j + 1)
            {
                break;
            }
        }
           if (j == 9)
          {
               int t = atoi(tmp.c_str());
               if (t > max)
               {
                   max = t;
               }
          }
        }
     }
    
   cout << max << endl;
   return 0;
}

