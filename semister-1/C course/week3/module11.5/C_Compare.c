#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[100], b[100];
    scanf("%s", &a);
    scanf("%s", &b);
    int result = strcmp(a, b);
    // printf("%d", result);
    if (0 > result)
    {
        printf("%s", a);
    }
    else if (0 < result)
    {
        printf("%s", b);
    }
    else
    {
        printf("%s", b);
    }

    return 0;
}