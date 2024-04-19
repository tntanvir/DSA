value=input()
# print(value)
cnt=0
my_str=""
lst=[]
for i in value:
    my_str+=i
    if i=="L":
        cnt+=1
    else:
        cnt-=1
    if cnt==0:
        lst.append(my_str)
        my_str=""

print(len(lst))
# print(lst)
for i in lst:
    print(i)
