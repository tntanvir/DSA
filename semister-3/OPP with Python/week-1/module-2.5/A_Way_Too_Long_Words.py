lop=int(input())
for i in range(lop):
    wrd=input().strip()
    if len(wrd)>10:
        fst=wrd[0]
        lst=wrd[-1]
        mid=wrd[1:-1]
        print(f'{fst}{len(mid)}{lst}')
    else:
        print(wrd)