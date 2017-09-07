import math

def isPrime(n):
    if n == 1:
        return False
    for i in range(2,int(math.sqrt(n))+1):
        if n % i == 0:
            return False
    return True

def isPandigital(n):
    stash = [True]*9
    i = 0
    while n != 0:
        digit = int(n % 10)
        if digit == 0:
            return False
        else:
            stash[digit-1] = False
            
        n /= 10
        i += 1
        
    for i in range(i-1,-1,-1):
        if stash[i] != False:
            return False
    return True


max_number = 0

for i in range(1234,7654321+1):
    if isPandigital(i) and isPrime(i):
        if i > max_number:
            max_number = i
print(max_number)
    