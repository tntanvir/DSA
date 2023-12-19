#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[100];
    char b[100];
    scanf("%s %s", a, b);
    // for (int i = 0; i < strlen(b) + 1; i++)
    // {
    //     a[i] = b[i];
    // }
    strcpy(a, b);
    printf("list a: %s \nlist b: %s", a, b);
    return 0;
}