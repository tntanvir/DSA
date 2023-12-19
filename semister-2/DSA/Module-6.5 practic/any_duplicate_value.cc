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
void fequenc_count(Node *head)
{
    int a[100] = {0};
    Node *tem = head;
    while (tem != NULL)
    {
        a[tem->vlu] += 1;
        tem = tem->next;
    }
    bool flag = false;
    for (int i = 0; i < 100; i++)
    {
        if (a[i] > 1)
        {
            cout << "YES" << endl;
            flag = false;
            // cout << a[i] << " ";
            break;
        }
        else
        {
            flag = true;
        }
    }
    if (flag == true)
    {
        cout << "NO" << endl;
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
    fequenc_count(head);

    return 0;
}