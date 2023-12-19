#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    char ar[101];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &ar);
        int len = strlen(ar);
        if (len <= 10)
        {
            printf("%s\n", ar);
        }
        else
        {
            char last = ar[len - 1];
            char fast = ar[0];
            char count = len - 2;
            printf("%c%d%c\n", fast, count, last);
        }
    }

    return 0;
}