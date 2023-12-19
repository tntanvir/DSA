#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    if (n > 0)
    {
        for (int i = 1; i < n + 1; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        {
            n = n * -1;

            for (int i = n; i >= 0; i--)

            {
                printf("%d ", i * -1);
            }
        }
    }
    return 0;
}