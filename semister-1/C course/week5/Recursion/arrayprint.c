#include <stdio.h>
void fun(int ar[], int l, int s)
{
    if (s == l)
    {
        return;
    }
    printf("%d ", ar[s]);

    fun(ar, l, s + 1);
}
int main(int argc, char const *argv[])
{
    int ar[6] = {1, 2, 3, 4, 5, 8};
    fun(ar, 6, 0);
    return 0;
}