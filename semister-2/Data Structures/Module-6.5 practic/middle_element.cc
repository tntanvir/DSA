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
void add_tail(Node *&head, int vlu)
{
    Node *newNode = new Node(vlu);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
}
void println(Node *head)
{
    Node *tem = head;
    int sum = 0;
    while (tem != NULL)
    {
        // cout << tem->vlu;
        sum++;
        tem = tem->next;
    }
    if (sum % 2 == 0)
    {
        sum = sum / 2;
        Node *tem = head;
        for (int i = 0; i < sum - 1; i++)
        {
            tem = tem->next;
        }
        // cout;
        cout << tem->vlu << " " << tem->next->vlu << endl;
    }
    else
    {
        sum = sum / 2;
        Node *tem = head;
        for (int i = 0; i < sum; i++)
        {
            tem = tem->next;
        }
        cout << tem->vlu << endl;
    }
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        add_tail(head, n);
    }
    println(head);

    return 0;
}