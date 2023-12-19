#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int vlu;
    Node *next;
    Node(int vlu)
    {
        this->vlu = vlu;
        this->next = NULL;
    }
};
void add_tail(Node *&head, Node *&tail, int n)
{
    Node *newNode = new Node(n);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = tail->next;
}
void mxNum(Node *head)
{
    int max = INT_MIN;
    Node *tem = head;
    while (tem != NULL)
    {
        // cout << tem->vlu;
        if (tem->vlu > max)
        {
            max = tem->vlu;
        }

        tem = tem->next;
    }
    cout << max << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        add_tail(head, tail, n);
    }
    mxNum(head);
    return 0;
}
