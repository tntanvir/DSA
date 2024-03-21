#include <bits/stdc++.h>
using namespace std;
vector<int> ar[10005];

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    int lop;
    cin >> lop;
    while (lop--)
    {
        int a;
        cin >> a;
        vector<int> v;
        for (int child : ar[a])
        {
            // cout << child << " ";
            v.push_back(child);
        }
        if (v.empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(v.begin(), v.end(), greater<int>());
            for (int x : v)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}