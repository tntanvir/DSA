#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[100], b[100], c[100];
    int n = 0;
    scanf("%s %s", a, b);
    // for (int i = 0; i < strlen(a); i++)
    // {
    //     c[i] = a[i];
    //     n++;
    // }
    // printf("%d\n", n);
    // int y = 0;
    // for (int i = n; b[y] != '\0'; i++)
    // {
    //     c[i] = b[y];
    //     y++;
    // }
    // for (int i = 0; i < strlen(c); i++)
    // {
    //     printf("%c", c[i]);
    // }

    strcat(a, b);
    printf("%s", a);

    return 0;
}