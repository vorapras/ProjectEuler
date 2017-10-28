import math

def isPentagonal(number):
    penTest = (math.sqrt(1+24*number)+1)/6
    if penTest == int(penTest):
        return True
    return False

result = 0
i = 143
while True:
    i += 1
    result = i*(2*i-1)
    if isPentagonal(result):
        print("The next triangonal,pentagonal and hexagonal number is ",result)
        break



        
    

