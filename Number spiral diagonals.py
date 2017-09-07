dim = int((1001+1)/2)
x = 1
incr = 0
result = 1
for i in range(2,dim+1):
    incr += 2
    for j in range(4):
        x += incr
        result += x
print(result)