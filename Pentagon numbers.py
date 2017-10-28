import math

def isPentagonal(number):
    penTest = (math.sqrt(1+24*number)+1)/6
    if penTest == int(penTest):
        return True
    else:
        return False

result = 0
notFound = True
i = 1
k = 0
while notFound:
    i += 1
    n = i*(3*i-1)/2
    for j in range(i-1,0,-1):
        m = j*(3*j-1)/2
        if isPentagonal(n-m) and isPentagonal(n+m):
            result = n-m
            k = j
            notFound = False
            break
        
print("i = ",i)
print("k = ",k)
print("The value of d is ",result)
        
    
        
    

