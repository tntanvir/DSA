#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if (n == m)
    {
        bool flag = true;
        while (!s.empty())
        {
            if (s.top() != q.front())
            {
                cout << "NO" << endl;
                flag = false;
                break;
            }
            s.pop();
            q.pop();
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}