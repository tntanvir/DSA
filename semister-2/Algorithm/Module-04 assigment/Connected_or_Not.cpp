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
    }

    int lop;
    cin >> lop;
    while (lop--)
    {
        int a, b;
        cin >> a >> b;
        bool flg = true;
        if (a == b)
        {
            cout << "YES" << endl;
            flg = false;
        }
        else
        {
            for (int child : ar[a])
            {
                if (child == b)
                {
                    cout << "YES" << endl;
                    flg = false;
                    break;
                }
            }
        }

        if (flg)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}