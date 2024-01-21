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

void ins_at_tail(Node *&head, Node *&tail, int n)
{
    Node *newNode = new Node(n);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = tail->next;
};
int print_link(Node *head)
{
    Node *tem = head;
    int sum = 0;

    while (tem != NULL)
    {
        // cout << tem->vlu << " ";
        sum++;
        tem = tem->next;
    }
    // cout << endl;
    return sum;
};
int print_link2(Node *head)
{
    Node *tem = head;
    int sum = 0;
    while (tem != NULL)
    {
        // cout << tem->vlu << " ";
        sum++;
        tem = tem->next;
    }
    // cout << endl;
    return sum;
};

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
        ins_at_tail(head, tail, n);
    }
    int sum = print_link(head);
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
        ins_at_tail(head2, tail2, n);
    }
    int sum1 = print_link2(head2);
    if (sum == sum1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}