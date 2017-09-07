champer_num = '1'
i = 2
while i < 1000000:
    champer_num += str(i)
    i += 1
print(int(champer_num[0]) * int(champer_num[9]) * int(champer_num[99]) * int(champer_num[999]) * int(champer_num[9999]) * int(champer_num[99999]) * int(champer_num[999999]))

