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
void add_tial(Node *&head, int n)
{
    Node *newNode = new Node(n);
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
void is_Sort(Node *head)
{
    Node *tem = head;
    bool flag = false;
    int sum = 0;
    while (tem != NULL)
    {
        // cout << tem->vlu;
        sum++;
        tem = tem->next;
    }
    Node *tam = head;
    for (int i = 0; i < sum - 1; i++)
    {
        if (tam->vlu > tam->next->vlu)
        {
            flag = false;

            cout << "NO" << endl;
            break;
        }
        else
        {
            flag = true;
        }
        tam = tam->next;
    }

    if (flag == true)
    {
        cout << "YES" << endl;
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
        add_tial(head, n);
    }
    is_Sort(head);

    return 0;
}