#include <stdio.h>
int capital_to_small(int c)
{
    int res = c + 32;
    return res;
}
int main(int argc, char const *argv[])
{
    char c;
    scanf("%c", &c);
    int res = capital_to_small(c);
    printf("%c", res);
    return 0;
}