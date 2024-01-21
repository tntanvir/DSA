#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        vector<int> v(y);
        for (int j = 0; j < y; j++)
        {
            cin >> v[j];
        }
        bool flag = false;
        for (int j = 0; j < y - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}