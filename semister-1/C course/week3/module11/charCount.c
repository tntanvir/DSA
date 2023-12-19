#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    char ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &ar[i]);
    }
    int cnt[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = ar[i] - 'a';
        cnt[value]++;
    }
    for (int i = 0; i < 25; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c = %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}