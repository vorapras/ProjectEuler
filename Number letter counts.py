'Problem17 Number letter counts'

twentystr = {0:0, 1:len('one'), 2:len('two'), 3:len('three'), 4:len('four'), 5:len('five'), 6:len('six'), 7:len('seven'),
     8:len('eight'), 9:len('nine'), 10:len('ten'), 11:len('eleven'), 12:len('twelve'), 13:len('thirteen'), 14:len('fourteen'),
     15:len('fifteen'),16:len('sixteen'),17:len('seventeen'),18:len('eighteen'),19:len('nineteen')}
tenthstr = {2: len('twenty'), 3:len('thirty'), 4:len('forty'),
      5:len('fifty'), 6:len('sixty'), 7:len('seventy'), 8:len('eighty'), 9:len('ninety')}

def num_to_word(n, result=0):
    if n < 20:
        result += twentystr[n]
        return result
    elif n < 100:
        result += tenthstr[n//10]
        return num_to_word(n%10, result)
    elif n < 1000:
        result += twentystr[n//100]
        result += len('hundred')
        if n%100 == 0:
            return result            
        else:
            result += len('and')
            return num_to_word(n%100, result)
    elif n == 1000:
        return len('onethousand')
s = 0
for i in range(1,1001):
    s += num_to_word(i)
print(s)