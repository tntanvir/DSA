#include <stdio.h>
int main(int argc, char const *argv[])
{
    int inputarr;
    scanf("%d", &inputarr);
    int num[inputarr];
    for (int i = 0; i < inputarr; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < inputarr; i++)
    {
        if (0 > num[i])
        {
            printf("%d ", 2);
        }
        else if (num[i] == 0)
        {
            printf("0 ");
        }

        else
        {
            printf("%d ", 1);
        }
    }

    return 0;
}