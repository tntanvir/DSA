#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char c;
    cin >> a;
    cin >> c;
    cin >> b;

    if (c == '>')
    {
        if (a > b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (c == '<')
    {
        if (a < b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else
    {
        if (a == b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }

    // cout << a << " " << c << " " << b;

    return 0;
}