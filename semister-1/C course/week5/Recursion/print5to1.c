#include <stdio.h>
void fun(int n)
{
    if (n == 6)
    {
        return;
    }
    fun(n + 1);
    printf("%d ", n);
}
int main(int argc, char const *argv[])
{
    fun(1);
    return 0;
}