#include <stdio.h>
int main(int argc, char const *argv[])
{
    int lop;
    int num;
    int evn = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &lop);
    for (int i = 0; i < lop; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            evn++;
        }
        else
        {
            odd++;
        }
        if (0 < num)
        {
            pos++;
        }
        else if (num < 0)
        {
            neg++;
                }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", evn, odd, pos, neg);
    return 0;
}