#include <stdio.h>
void swap_it(int *a, int *b)
{
    int tamp = *a;
    *a = *b;
    *b = tamp;
}
int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap_it(&a, &b);
    printf("%d %d", a, b);
    return 0;
}