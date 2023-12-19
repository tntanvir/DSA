#include <stdio.h>
int main(int argc, char const *argv[])
{
    int lop;
    int max = 0;
    int num;
    scanf("%d", &lop);
    for (int i = 0; i < lop; i++)
    {
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
    }
    printf("%d", max);

    return 0;
}