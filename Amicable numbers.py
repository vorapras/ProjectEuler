# Problem 21 Amicable numbers

def sumOf_prop_Divisor(n):
    result = 0
    for i in range(1, int(n/2)+1):
        if n%i == 0:
            result += i
    return result
sum = 0
for x in range(1,10000):
    if sumOf_prop_Divisor(x) != x and sumOf_prop_Divisor(sumOf_prop_Divisor(x)) == x:
        sum += x
print(sum)
