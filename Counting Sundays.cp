//Problem 19 Counting Sundays

#include <iostream>
using namespace std;

int main () {
    
    //1 Jan 1901 is Tuesday so we can start with day = 2
    int count_sunday = 0, days_in_month, days_passed = 2;
    
    for (int year = 1901; year <= 2000; year++)
    {
        for (int month = 1; month <= 12; month++)
        {
            // Thirty days months
            if (month == 4 || month == 6 || month == 9 || month == 11)
            {
                days_in_month = 30;
            }
            else if (month == 2)
            {
                //Condition on leap year
                if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                {
                    days_in_month = 29;
                }
                else
                {
                    days_in_month = 28;
                }
            }
            else
            {
                days_in_month = 31;
            }
            //count Sundays fell on the first of the month
            if (days_passed % 7 == 0)
            {
                count_sunday++;
            }
            days_passed += days_in_month;
        }
    }
    
    cout << "There are " << count_sunday << " Sundays fell on the first of the month during the twentieth century."<< endl;
    
    return 0;
    
}
