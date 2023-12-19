#include <stdio.h>
#include <string.h>
int is_palindrome(char a[])
{
    int vlue = 1;

    int len = strlen(a) - 1;
    for (int i = 0; i < len; i++)
    {
        if (a[i] != a[len])
        {
            vlue = 0;
            break;
        }

        len--;
    }

    return vlue;
}

int main(int argc, char const *argv[])
{
    char a[1000];
    scanf("%s", &a);
    int vlue = is_palindrome(a);
    if (vlue)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}