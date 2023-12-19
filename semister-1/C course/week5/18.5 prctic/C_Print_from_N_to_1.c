#include <stdio.h>
void n_to_1(int n)
{
    if (n == 0)
        return;
    printf("%d", n);
    if (n != 1)
    {
        printf(" ");
    }

    n_to_1(n - 1);
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    n_to_1(n);
    return 0;
}