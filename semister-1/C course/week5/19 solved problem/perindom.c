#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[1001];
    scanf("%s", &a);
    char b[1001];
    strcpy(b, a);
    int len = strlen(b) - 1;
    for (int i = 0; i < len; i++)
    {
        char tam = b[i];
        b[i] = b[len];
        b[len] = tam;
        len--;
    }
    int flag = 0;

    if (strcmp(a, b) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}