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
void insert_tail(Node *&head, int vlu)
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
};
void print_size(Node *head)
{
    int sum = 0;
    Node *tem = head;
    while (tem != NULL)
    {
        sum += 1;
        tem = tem->next;
        // cout << sum << endl;
    }
    cout << sum << endl;
}
// void print_linklist(Node *head)
// {
//     Node *tem = head;
//     while (tem != NULL)
//     {
//         cout << tem->vlu << endl;
//         tem = tem->next;
//     }
//     cout << endl;
// }
int main()
{
    Node *head = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        insert_tail(head, n);
    }
    print_size(head);
    // print_linklist(head);

    return 0;
}