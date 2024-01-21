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
void print_next(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->vlu << " ";
        tem = tem->next;
    }
    cout << endl;
};
void print_prev(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->vlu << " ";
        tem = tem->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->prev = NULL;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = NULL;
    print_next(head);
    print_prev(tail);

    return 0;
}