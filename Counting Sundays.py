# Problem 19 Counting Sundays

count_sunday = 0
days_in_month = 0
days_passed = 2 # 1 Jan 1901 is Tuesday so we can start with day = 2

for year in range(1901,2001):
    for month in range(1,13):
        if month == 4 or month == 6 or month == 9 or month == 11:
            days_in_month = 30
        elif month == 2:
            if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
                days_in_month = 29
            else:
                days_in_month = 28
        else:
            days_in_month = 31
    
    if days_passed % 7 == 0:
        count_sunday += 1
    days_passed += days_in_month
    
print(count_sunday)