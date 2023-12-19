#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; n != 0; i++)
    {
        n = n % 10;
        sum += n;
        n = n / 10;
        printf("%d", n);
    }
    printf("%d", sum);

    return 0;
}