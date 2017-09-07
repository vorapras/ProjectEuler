n=28123
abundant_num = []
def sum_of_prop_divisor(n):
    result = 0
    for i in range(1, int(n/2)+1):
        if n%i == 0:
            result += i
    return result

for i in range(1,n+1):
    if i < sum_of_prop_divisor(i):
        abundant_num += [i]

sum_of_abundant = []
for i in abundant_num:
    for j in abundant_num:
        if i+j <= n:
            sum_of_abundant.append(i+j)
s = n*(n+1)/2
s -= sum(set(sum_of_abundant))
print(s)