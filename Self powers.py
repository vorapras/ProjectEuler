result = 0
modulo = 10000000000

for i in range(1,1001):
    temp = i
    for j in range(1,i):
        temp *= i
        temp %= modulo
    result += temp
    result %= modulo

print(result)