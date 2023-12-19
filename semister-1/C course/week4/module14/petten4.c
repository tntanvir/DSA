#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, s;
    scanf("%d", &n);

    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
    }

    return 0;
}