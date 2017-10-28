import math
def isprime(x):
    for k in range(2,int(math.sqrt(x))+1):
        if x%k == 0:
            return False
    return True
def listOfProperDivisors(n):
    result = set()
    for i in range(2, int(math.sqrt(n)+1)):
        if n%i == 0:
            result.add(i)
            result.add(n//i)
    return result

ctr = 0
exit = 0
check = 4
n = 2
while True:
    numberOfprimeFactor = len([x for x in listOfProperDivisors(n) if isprime(x)])
    while numberOfprimeFactor == check:
        ctr += 1
        if ctr == check:
            exit = 1
            break
        n += 1
        numberOfprimeFactor = len([x for x in listOfProperDivisors(n) if isprime(x)])
    if exit == 1:
        break
    ctr = 0
    n += 1
print(n-check+1)