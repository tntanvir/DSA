#include <stdio.h>
int char_to_ascii(char a)
{
    int res = a;
    return res;
}
int main(int argc, char const *argv[])
{
    char c;
    scanf("%c", &c);
    int num = char_to_ascii(c);
    printf("%d", num);
    return 0;
}