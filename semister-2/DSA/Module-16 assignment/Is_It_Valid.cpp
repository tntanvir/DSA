#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        stack<int> s;
        string x;
        cin >> x;
        for (char y : x)
        {
            if (s.size() == 0)
            {
                s.push(y);
            }

            else if (y == s.top())
            {
                s.push(y);
            }
            else
            {
                if (s.size() > 0)
                {
                    s.pop();
                }
            }
        }
        if (s.empty() == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}