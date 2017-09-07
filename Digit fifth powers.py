def digit_powers(exponent):
    def power(k):
        return int(k) ** exponent
    if exponent <= 1:
        return "The exponent must be at least 2."
    else:
        total_sum = 0
        upper_bound = (exponent + 1) * (9 ** exponent)
        for number in range(10, upper_bound + 1):
            digits = [x for x in str(number)]
            if number == sum(map(power, digits)):
                print(number)
                total_sum += number
        return total_sum

print(digit_powers(5))