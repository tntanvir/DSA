#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int mod = n % 10;
    int div = n / 10;
    if (mod > div)
    {
        if (mod && div > 0 && mod % div == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else if (mod && div > 0 && div % mod)

    {
        if (div % mod == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("YES");
    }

    return 0;
}