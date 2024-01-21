#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lop;
    cin >> lop;
    queue<string> q;
    while (lop--)
    {
        int n;
        cin >> n;
        string nam;
        if (n == 0)
        {
            cin >> nam;
            q.push(nam);
        }
        else
        {
            if (q.size() > 0)
            {

                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}