from math import *
sums= lambda x,y:x+y

print(sums(1,2))
numbers = [10, 20, 30, 40, 50]
print(numbers[-4:-1])

numbers = [9, 15, 2, 36]
numbers[1:4] = [20, 14, 36]
print(numbers)

try:
    result =20//5
except:
    print("error happened")
finally:
    print("finally here")