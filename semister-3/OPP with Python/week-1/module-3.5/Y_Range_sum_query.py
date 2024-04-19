l=list(map(int,input().split()))
# print(l[1])

lst=list(map(int,input().split()))
# print(lst)

for i in range(l[1]):
    q=list(map(int,input().split()))
    # print(q)
    print(sum(lst[q[0]-1:q[1]]))
