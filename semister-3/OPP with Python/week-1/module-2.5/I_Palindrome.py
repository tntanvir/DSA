num=input()
s=num[::-1].lstrip('0')
print(s)
is_palindrome=num==num[::-1]

if is_palindrome:
    print('YES')
else:
    print('NO')
