lop=int(input())
lst=list(map(int,input().split()))
next_list=[]
res=0
while True:
    for i in range(len(lst)):
        if lst[i]%2 == 0:
            next_list.append(lst[i]//2)
    if len(next_list)==len(lst):
        res+=1
        lst=next_list
        next_list=[]
    else:
        break
print(res)
