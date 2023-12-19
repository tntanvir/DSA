#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int k = 1;
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int i = 0; i < s; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < k; i++)
        {
            printf("*");
        }
        if (i <= n - 1)
        {
            s--;
            k += 2;
        }
        else

        {
            s++;
            k -= 2;
        }
        printf("\n");
    }

    return 0;
}