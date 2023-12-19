#include <stdio.h>
int main(int argc, char const *argv[])
{
    char x;
    scanf("%c", &x);
    if (x >= 'A' && x <= 'Z')
    {
        int result = x + 32;
        printf("%c", result);
    }
    else
    {
        int result = x - 32;
        printf("%c", result);
    }

    return 0;
}
