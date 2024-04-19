lop=int(input())

sum=0
for i in range(lop):
    s=input()
    if(s[0]=='+' or s[-1]=='+'):
        sum+=1
    else:
        sum-=1
print(sum)