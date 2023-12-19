#include <stdio.h>
int small_to_capital(int c)
{
    char res = c - 32;
    return res;
}
int main(int argc, char const *argv[])
{
    // printf("%c", 98 - 32);
    char c;
    scanf("%c", &c);
    int res = small_to_capital(c);
    printf("%c", res);
    return 0;
}