#include <stdio.h>
int my_len(char ar[])
{
    int num = 0;
    for (int i = 0; ar[i] != '\0'; i++)
    {
        num++;
    }

    return num;
}

int main(int argc, char const *argv[])
{
    char ar[100];
    scanf("%s", ar);

    int num = my_len(ar);
    printf("%d", num);
    return 0;
}