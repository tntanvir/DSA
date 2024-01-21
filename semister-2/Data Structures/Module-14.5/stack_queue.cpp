#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> stk;
    void push(int x)
    {
        stk.push_back(x);
    }
    void pop()
    {
        stk.pop_back();
    }
    int top()
    {
        return stk.back();
    }
    int size()
    {
        return stk.size();
    }
    bool empty()
    {
        if (stk.size() == 0)
            return true;
        else
            return false;
    }
};

class myQueue
{

public:
    list<int> q;
    void push(int x)
    {
        q.push_back(x);
    }
    void pop()
    {
        q.pop_front();
    }
    int font()
    {
        return q.front();
    }
    int size()
    {
        return q.size();
    }
    bool empty()
    {
        if (q.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack s;
    myQueue q;
    int n;
    cin >> n;
    while (n--)
    {

        int y;
        cin >> y;
        s.push(y);
    }

    int m;
    cin >> m;
    while (m--)
    {

        int x;
        cin >> x;
        q.push(x);
    }

    // cout << s.top() << " " << q.font() << endl;
    if (s.size() == q.size())
    {
        bool flag = true;
        while (!s.empty())
        {
            if (s.top() != q.font())
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