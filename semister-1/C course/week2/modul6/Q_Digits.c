#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int lop;
    scanf("%d", &lop);
    for (int i = 0; i < lop; i++)
    {
        scanf("%d", &num);

        do
        {
            printf("%d ", num % 10);
            num /= 10;
        } while (num != 0);
        printf("\n");
    }

    return 0;
}