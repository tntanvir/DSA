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

void print_duble(Node *head)
{
    while (head != NULL)
    {
        cout << head->vlu << " ";
        head = head->next;
    }
}
void revers_print(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->vlu, j->vlu);
        i = i->next;
        j = j->prev;
    }
    swap(i->vlu, j->vlu);
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
    revers_print(head, tail);
    print_duble(head);
    return 0;
}