#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char ar[10001];
    scanf("%s", ar);
    int res[26];
    for (int i = 0; i < strlen(ar); i++)
    {
        int vlu = ar[i] - 'a';
        res[vlu]++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (res[i - 'a'] != 0)
        {
            printf("%c - %d\n", i, res[i - 'a']);
        }
    }

    return 0;
}