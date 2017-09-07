import math
def lattic_pth_num(n):
    return math.factorial(2*n)/(math.factorial(n)**2)
print(lattic_pth_num(20))