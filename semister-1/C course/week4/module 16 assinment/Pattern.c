#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int k = 1;
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        // even
        if (i % 2 == 0)
        {

            for (int j = 0; j < s; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < k; j++)
            {
                printf("-");
            }
        }
        // odd
        else
        {

            for (int j = 0; j < s; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < k; j++)
            {
                printf("#");
            }
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