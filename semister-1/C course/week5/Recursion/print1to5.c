#include <stdio.h>
void fun(int f, int e)
{
    printf("%d ", f);
    if (f == e)
        return;
    fun(f - 1, e);
}
int main(int argc, char const *argv[])
{
    fun(10, 5);
    return 0;
}