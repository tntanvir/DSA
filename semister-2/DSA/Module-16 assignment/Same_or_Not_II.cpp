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
class stacke
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
        if (0 < sz)
        {
            return false;
        }
        return true;
    }
};

class queues
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
        Node *delNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete delNode;
            return;
        }
        head->prev = NULL;
    }
    int front()
    {
        return head->vlu;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz > 0)
        {
            return false;
        }
        return true;
    }
};

int main()
{
    stacke s;
    queues q;
    int n, m;
    int o = 0, k = 0;
    cin >> n >> m;
    while (n--)
    {
        int x;
        cin >> x;
        s.push(x);
        o++;
    };
    while (m--)
    {
        int x;
        cin >> x;
        q.push(x);
        k++;
    };

    if (o == k)
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
        if (flag)
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