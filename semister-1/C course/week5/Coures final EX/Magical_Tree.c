#include <stdio.h>
void print_star()
{
    int n;
    scanf("%d", &n);
    int cc = 6;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            cc++;
        }
    }
    int s = cc - 1;
    int k = 1;
    for (int i = 0; i < cc; i++)
    {
        for (int j = 0; j < s; j++)

        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }

        s--;
        k += 2;
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    print_star();

    return 0;
}