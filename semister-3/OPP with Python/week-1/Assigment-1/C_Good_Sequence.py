lop=int(input())
lst=list(map(int,input().split()))
obj={}
for i in lst:
    c=lst.count(i)
    obj[i]=c

cnt = 0
for key, val in obj.items():
    if key < val:
        cnt += val - key
    if key > val:
        cnt += val
print(cnt)

