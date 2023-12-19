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
}
void print_linklist(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->vlu << endl;
        tem = tem->next;
    }
    cout << endl;
}
void insert_poss(Node *head, int pos, int vlu)
{
    Node *newNode = new Node(vlu);
    for (int i = 1; i < pos - 1; i++)
    {
        tem = tem->next;
    }
}
int main()
{
    Node *head = NULL;
    // cout << a->vlu;
    while (1)
    {
        cout << "1 for insert tail: ";
        cout << "2 for print :";
        cout << "3 for insert possition :";
        cout << "4 for exit :";
        int n;
        cin >> n;
        if (n == 1)
        {
            int vlu;
            cout << "Enter a value :";
            cin >> vlu;
            insert_tail(head, vlu);
        }
        else if (n == 2)
        {
            print_linklist(head);
        }
        else if (n == 3)
        {
            int pos, vlu;
            cin >> pos >> vlu;
            insert_poss(head, pos, vlu);
        }

        else if (n == 4)
        {
            break;
        }
    }

    return 0;
}