#include <stdio.h>
void sort(int a, int b, int c)
{

    if (a > b)
    {
        int tam = a;
        a = b;
        b = tam;
    }
    if (a > c)
    {
        int tam = a;
        a = c;
        c = tam;
    }
    if (b > c)
    {
        int tam = b;
        b = c;
        c = tam;
    }
    printf("%d\n%d\n%d\n\n", a, b, c);
}
int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sort(a, b, c);
    // printf
    printf("%d\n%d\n%d", a, b, c);

    return 0;
}