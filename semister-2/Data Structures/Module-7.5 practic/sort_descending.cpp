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
void print_reverse(Node *head)
{
    Node *tem = head;
    if (tem == NULL)
    {
        return;
    }
    print_reverse(tem->next);
    cout << tem->vlu << " ";
}
void sort_descending(Node *head)
{

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->vlu > j->vlu)
            {
                swap(i->vlu, j->vlu);
            }
        }
    }
    print_reverse(head);
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
    sort_descending(head);
    return 0;
}
