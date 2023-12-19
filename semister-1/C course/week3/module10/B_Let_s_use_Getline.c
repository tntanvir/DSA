#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char ar[1000001];
    fgets(ar, 1000001, stdin);
    scanf("%s", ar);
    for (int i = 0; ar[i] != '\\'; i++)
    {
        printf("%c", ar[i]);
    }

    return 0;
}