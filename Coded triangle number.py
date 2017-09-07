import math

def isTriangle(n):
    x = math.sqrt(1+8*n)
    if x == int(x):
        return True
    return False

def wordvalues(s):
    sum_result = 0
    s = s.lower()
    for i in s:
        sum_result += (ord(i)-96)
    return sum_result

text = open('/Users/ZerWinner/Desktop/p042_words.txt', 'r')
inLine = sorted(text.readlines()[0].replace('"','').split(','))

count = 0
for word in inLine:
    if isTriangle(wordvalues(word)):
        print(word)
        count += 1
print("There are ",count," triangle words.")
        
    

