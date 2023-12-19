#include <stdio.h>
int main(int argc, char const *argv[])
{
    int lop, num;
    scanf("%d %d", &lop, &num);
    for (int i = 0; i < lop; i++)
    {
        for (int i = 1; i <= num; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}