mus=int(input())
n=input()
l=[]

for i in range(26):
    l.append(0)
for i in n:
    l[ord(i)-ord('a')]+=1

# print(l)
for i in range(26):
    if l[i]!=0:
        for j in range(l[i]):
            #  print(l[i])
            print(chr(i+ord('a')),end='')
# o=sorted(n)
# lst=list(n)
# lst.sort()
# s="".join(lst)
# print(chr(100))
