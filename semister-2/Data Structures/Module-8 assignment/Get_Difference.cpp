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
void comper(Node *head)
{
    int max = INT_MIN;
    int min = INT_MAX;
    Node *tem = head;
    while (tem != NULL)
    {
        if (tem->vlu > max)
        {
            max = tem->vlu;
        }
        tem = tem->next;
    }
    Node *tem1 = head;
    while (tem1 != NULL)
    {
        if (tem1->vlu < min)
        {
            min = tem1->vlu;
        }
        tem1 = tem1->next;
    }
    cout << max - min << endl;
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
        {
            break;
        }
        add_tail(head, tail, n);
    }
    // cout << head << " " << tail << endl;
    if (head == tail)
    {
        cout << 0 << endl;
    }
    else
    {
        comper(head);
    }

    return 0;
}