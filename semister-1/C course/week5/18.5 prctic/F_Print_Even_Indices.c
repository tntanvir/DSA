#include <stdio.h>
void even_num(int *a, int st, int end)
{
    if (st == end)
        return;
    even_num(a, st + 1, end);
    if (st % 2 == 0)
    {
        printf("%d ", a[st]);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    even_num(a, 0, n);
    return 0;
}