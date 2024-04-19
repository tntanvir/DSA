first_number = int(input())
integer_list = list(map(int, input().split()))

# print("First number:", first_number)
# print("List of integers:", integer_list)
next_list = integer_list.copy()
next_list.reverse()
# print( next_list == integer_list )
if next_list==integer_list:
    print("YES")
else:
    print("NO")