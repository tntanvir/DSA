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
    print_reverse(head);

    return 0;
}