def cyclelength(x):
    result = 10
    i = 0
    # Calculate decimal number by multiplying 10 each time before getting the remainder
    # Loop until it comes back to 10
    while result != 10 or i < 1:
        result = (result % x) * 10
        i += 1
    return i
    
longest = 0
for i in range(2, 1000):
    if i%2 != 0 and i%5 != 0:
        length = cyclelength(i)
        if length > longest:
            longest = length
            result = i
print(result)