#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int vlu;
    Node *next;
    Node *prev;
    Node(int vlu)
    {
        this->vlu = vlu;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int n)
    {
        sz++;
        Node *newNode = new Node(n);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *delNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete delNode;
    }
    int top()
    {
        return tail->vlu;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
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
    myStack fast;
    myStack secend;

    int n;
    cin >> n;
    while (n--)
    {
        int y;
        cin >> y;
        fast.push(y);
    }
    int y;
    cin >> y;
    while (y--)
    {
        int x;
        cin >> x;
        secend.push(x);
    }
    // cout << fast.size();
    // cout << secend.size();
    if (fast.size() == secend.size())
    {
        bool flag = true;
        while (!fast.empty())
        {
            if (fast.top() != secend.top())
            {
                flag = false;
                cout << "NO" << endl;
                break;
            }

            fast.pop();
            secend.pop();
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