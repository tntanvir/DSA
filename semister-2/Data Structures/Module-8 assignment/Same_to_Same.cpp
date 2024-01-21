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
void add_tail2(Node *&head2, Node *&tail2, int n)
{
    Node *newNode = new Node(n);
    if (head2 == NULL)
    {
        head2 = newNode;
        tail2 = newNode;
    }
    tail2->next = newNode;
    tail2 = tail2->next;
}
void print(Node *head, Node *head2)
{
    bool flg = true;
    while (head != NULL)
    {
        if (head->vlu != head2->vlu)
        {
            cout << "NO" << endl;
            flg = false;
            break;
        }

        head = head->next;
        head2 = head2->next;
    }
    if (flg)
    {
        cout << "YES" << endl;
    }

    // cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int cnt = 0, cnt2 = 0;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        add_tail(head, tail, n);
        cnt++;
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        add_tail2(head2, tail2, n);
        cnt2++;
    }
    if (cnt == cnt2)
    {

        print(head, head2);
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}