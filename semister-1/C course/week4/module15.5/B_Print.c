#include <stdio.h>
void nall(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            printf(" ");
        }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    nall(n);
    return 0;
}