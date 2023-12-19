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

void print_linklist(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->vlu << " ";
        tem = tem->next;
    }
    cout << endl;
}

void inspos(Node *&head, int pos, int vlu)
{

    Node *newNode = new Node(vlu);
    Node *tem = head;

    for (int i = 0; i < pos - 1; i++)
    {
        tem = tem->next;
        if (tem == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    newNode->next = tem->next;
    tem->next = newNode;
    print_linklist(head);
};

void insHead(Node *&head, int pos, int vlu)
{
    Node *newNode = new Node(vlu);
    newNode->next = head;
    head = newNode;
    print_linklist(head);
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        else
        {
            insert_tail(head, n);
        }
    }
    int cas;
    cin >> cas;
    for (int i = 0; i < cas; i++)
    {
        int pos, vlu;
        cin >> pos >> vlu;
        if (pos == 0)
        {
            insHead(head, pos, vlu);
        }
        else
        {

            inspos(head, pos, vlu);
        }
    }

    return 0;
}