#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool
    operator()(int a, int b)
    {
        if (a > b)
        {
            return true;
        }
        else
        {

            return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, cmp> pq;
    while (n--)
    {
        int x;
        cin >> x;
        pq.push(x);
        // cout << x << endl;
    }
    // while (!pq.empty())
    // {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }
    int y;
    cin >> y;
    while (y--)
    {
        int m;
        cin >> m;
        if (m == 0)
        {
            int u;
            cin >> u;
            pq.push(u);
            cout << pq.top() << endl;
        }
        else if (m == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}