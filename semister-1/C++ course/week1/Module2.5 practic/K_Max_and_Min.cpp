#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max = 0;
    int min = 0;
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    // min
    if (a < b && a < c)
    {
        min = a;
    }
    else if (b < c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    cout << min << " " << max;
    return 0;
}