def count_pyth(p):
    n = 0
    p1 = int(p/3)
    p2 = int(p/2)
    
    for a in range(1,p1):
        for b in range(p2-a,p2):
            c = p-a-b
            if a*a+b*b == c*c:
                n+=1
    return n

max_num = 0

for i in range(120,1000):
    max_perimeter = count_pyth(i)
    if max_perimeter > max_num:
        max_num = max_perimeter
        p = i
print("The maximum perimeter less than 1000 which has maximum pythagorian triangles is ",p)