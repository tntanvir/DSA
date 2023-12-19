#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char i, j;
    cin >> a >> i >> b >> j >> c;
    // cout << a << i << b << j << c;
    if (i == '+')
    {
        if (a + b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a + b;
        }
    }
    else if (i == '-')
    {
        if (a - b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a - b;
        }
    }
    else
    {
        if (a * b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a * b;
        }
    }

    return 0;
}