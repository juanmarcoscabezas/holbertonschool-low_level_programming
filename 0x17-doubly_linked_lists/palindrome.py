#!/usr/bin/python3
number = 0
a = 0
b = 0
for i in range(1000):
    for j in range(1000):
        if str(i * j) == str(i * j)[::-1]:
            if i * j > number:
                number = i * j
                a = i
                b = j
print("The largest palindrome number is {:d} * {:d} = {:d}".format(a, b, number))
