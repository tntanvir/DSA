lop=int(input())
input_numbers=list(map(int,input().split()))
maxNumbers=max(input_numbers)
minNumbers=min(input_numbers)
maxidx=input_numbers.index(maxNumbers)
minidx=input_numbers.index(minNumbers)
input_numbers[maxidx]=minNumbers
input_numbers[minidx]=maxNumbers



# print(input_numbers)
for i in input_numbers:
    print(i,end=" ")