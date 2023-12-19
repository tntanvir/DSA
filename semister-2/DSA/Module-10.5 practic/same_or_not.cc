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
void insert_tail2(Node *&head, Node *&tail, int n)
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
int pre_size(Node *tail)
{
    Node *tem = tail;
    int len = 0;
    while (tem != NULL)
    {
        len++;
        tem = tem->prev;
    }
    return len;
}

void compr(Node *head, Node *head2)
{
    bool flg = true;
    while (head2 != NULL)
    {
        if (head->vlu != head2->vlu)
        {
            flg = false;
            cout << "NO" << endl;
            break;
        }

        head = head->next;
        head2 = head2->next;
    }
    if (flg == true)
    {
        cout << "YES" << endl;
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
    int fastlen = pre_size(tail);

    // ------------sec
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        insert_tail2(head2, tail2, n);
    }
    int seclen = pre_size(tail2);
    if (fastlen != seclen)
    {
        cout << "NO" << endl;
    }
    else
    {
        compr(head, head2);
    }

    return 0;
}