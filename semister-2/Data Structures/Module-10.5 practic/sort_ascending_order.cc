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
void insert_tail(Node *&head, Node *&tail, int n)
{
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

void ascending_order(Node *&head)
{

    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->vlu < j->vlu)
            {
                swap(i->vlu, j->vlu);
            }
        }
    }
}
void print_duble(Node *head)
{
    while (head != NULL)
    {
        cout << head->vlu << " ";
        head = head->next;
    }
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
        insert_tail(head, tail, n);
    }
    ascending_order(head);
    print_duble(head);
    return 0;
}