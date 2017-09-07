def isPandigital(n):
    if len(n) != 9:
        return False
    for i in range(1,10):
        if str(i) not in n:
            return False
    return True

result = 0
for i in range(1,10000):
    n = 2
    compute = str(i) + str(i*2)
    if isPandigital(compute):
        if int(compute) > result:
            result = int(compute)
            continue
    while int(compute) <= 987654321:
        n += 1
        compute = ''
        for c in range(1,n+1):
            compute += str(i*c)
        if isPandigital(compute):
            if int(compute) > result:
                result = int(compute)
            break
print(result)
