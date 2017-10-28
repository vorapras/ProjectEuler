import math
def isprime(x):
    for k in range(2,int(math.sqrt(x))+1):
        if x%k == 0:
            return False
    return True

n = 3
while True:    
    if not isprime(n):
        m = 1
        temp = n-2*m*m
        check = 0
        while temp > 0:
            if isprime(temp):
                check = 1
                break
            m += 1
            temp = n-2*m*m
        if check == 0:
            print(n)
            break
    n += 2
