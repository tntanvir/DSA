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
void any_perendom(Node *head, Node *tail)
{
    bool flg = true;
    while (head != tail && head->next != tail)
    {
        if (head->vlu != tail->vlu)
        {
            flg = false;
            break;
        }
        head = head->next;
        tail = tail->prev;
    }
    if (head->vlu != tail->vlu)
    {
        flg = false;
    }
    if (flg == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
        insert_tail(head, tail, n);
    }
    any_perendom(head, tail);

    return 0;
}