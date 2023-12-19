#include <stdio.h>
int voule(char s[], int n)
{
    if (s[n] == '\0')
    {
        return 0;
    }
    int res = voule(s, n + 1);
    if (s[n] >= 'A' && s[n] <= 'Z')
    {
        s[n] = s[n] + 32;
    }
    if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u')
    {
        return res + 1;
    }
    else
    {
        return res;
    }
}
int main(int argc, char const *argv[])
{
    char s[205];
    fgets(s, 205, stdin);
    int res = voule(s, 0);
    printf("%d", res);
    return 0;
}