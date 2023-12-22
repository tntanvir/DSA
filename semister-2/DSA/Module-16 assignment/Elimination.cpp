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
                s.push(int(y) - 48);
            }
            else
            {
                if (y == '1' && s.top() == 0)
                {

                    s.pop();
                }
                else
                {
                    s.push(int(y) - 48);
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
