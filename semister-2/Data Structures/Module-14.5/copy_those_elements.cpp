#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    stack<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int n;
        cin >> n;
        q.push(n);
    }
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}