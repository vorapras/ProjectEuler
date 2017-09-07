
" Probelm 14 Longest Collatz Sequence

def collatz(n):
    count = 0
    while n!= 1:
        if n%2==0:
            n = n//2
        else:
            n = 3*n+1
        count += 1
    return count+1
max_num = 0
result = 0
for i in range(1,1000000):
    if collatz(i) > mx:
        max_num = collatz(i)
        result = i
print(result)