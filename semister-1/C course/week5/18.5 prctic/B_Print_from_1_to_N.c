#include <stdio.h>
void print_n_num(int n)
{
    if (n == 0)
        return;
    print_n_num(n - 1);
    printf("%d\n", n);
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    print_n_num(n);
    return 0;
}