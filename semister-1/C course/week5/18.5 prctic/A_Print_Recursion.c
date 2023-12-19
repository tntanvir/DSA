#include <stdio.h>
void print_recursion(int n)
{
    printf("I love Recursion\n");
    if (n == 1)
    {
        return;
    }
    print_recursion(n - 1);
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    print_recursion(n);
    return 0;
}