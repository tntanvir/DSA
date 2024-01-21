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
void print_duble(Node *head)
{
    while (head != NULL)
    {
        cout << head->vlu << " ";
        head = head->next;
    }
    cout << endl;
}
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
void inst_head(Node *&head, Node *&tail, int n)
{
    Node *newNode = new Node(n);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int pre_size(Node *head)
{
    Node *tem = head;
    int len = 0;
    while (tem != NULL)
    {
        len++;
        tem = tem->next;
    }
    return len;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int n, vlu;
        cin >> n >> vlu;

        if (n == 0)
        {
            inst_head(head, tail, vlu);
        }
        else
        {
            insert_tail(head, tail, vlu);
        }
        print_duble(head);
    }

    return 0;
}