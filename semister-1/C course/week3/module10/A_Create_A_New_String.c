#include <stdio.h>
int main(int argc, char const *argv[])
{
    char fast[1000];
    char secend[1000];
    scanf("%s", fast);
    scanf("%s", secend);
    int fcount = 0;
    int scount = 0;
    for (int i = 0; fast[i] != '\0'; i++)
    {
        fcount++;
    }
    for (int i = 0; secend[i] != '\0'; i++)
    {
        scount++;
    }
    printf("%d %d\n", fcount, scount);
    printf("%s %s", fast, secend);

    return 0;
}