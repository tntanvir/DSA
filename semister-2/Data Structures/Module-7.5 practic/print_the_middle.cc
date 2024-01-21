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
void print_middle(Node *head)
{
    Node *tem = head;
    int sum = 0;
    while (tem != NULL)
    {
        sum++;
        tem = tem->next;
    }
    // cout << sum << " ";
    int lv = (sum / 2) - 1;
    Node *tem1 = head;
    if (sum % 2 == 0)
    {
        for (int i = 0; i < lv; i++)
        {
            tem1 = tem1->next;
        }
        cout << tem1->vlu << " " << tem1->next->vlu << endl;
    }
    else
    {
        for (int i = 0; i < (sum / 2); i++)
        {
            tem1 = tem1->next;
        }
        cout << tem1->vlu << endl;
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
        add_tail(head, tail, n);
    }
    print_middle(head);

    return 0;
}