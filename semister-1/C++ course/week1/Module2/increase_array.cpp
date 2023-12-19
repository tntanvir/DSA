#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[3];
    int *p = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        p[i] = a[i];
    }
    delete[] a;
    a = new int[5];
    for (int i = 0; i < 3; i++)
    {
        a[i] = p[i];
    }
    delete[] p;
    a[3] = 4;
    a[4] = 5;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i];
    }

    return 0;
}