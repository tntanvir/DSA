#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s;
    cin >> s;
    int *b = new int[s];

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    delete[] a;
    for (int i = n; i < s; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < s; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}