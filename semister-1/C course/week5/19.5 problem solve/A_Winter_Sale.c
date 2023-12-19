#include <stdio.h>
int main(int argc, char const *argv[])
{
    float dis;
    int sell;
    scanf("%f", &dis);
    scanf("%d", &sell);
    dis = 1 - dis / 100;
    printf("%.2f", sell / dis);
}