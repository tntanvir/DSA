#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int b;
    cin >> b;
    vector<int> u(b);
    for (int i = 0; i < b; i++)
    {
        cin >> u[i];
    }
    int x;
    cin >> x;

    v.insert(v.begin() + x, u.begin(), u.end());
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}