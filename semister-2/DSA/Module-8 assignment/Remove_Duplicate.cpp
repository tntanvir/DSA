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
void remove_duplicate(Node *head, int n)
{
    Node *tem2 = head;
    while (tem2->next != NULL)
    {
        if (tem2->next->vlu == n)
        {
            Node *delnot = tem2->next;
            tem2->next = delnot->next;
            delete delnot;
        }
        else
        {
            tem2 = tem2->next;
        }
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
        {
            break;
        }
        add_tail(head, tail, n);
    }
    Node *tem = head;
    while (tem != NULL)
    {

        remove_duplicate(tem, tem->vlu);
        tem = tem->next;
    }
    while (head != NULL)
    {
        cout << head->vlu << " ";
        head = head->next;
    }

    return 0;
}