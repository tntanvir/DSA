// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int vlu;
//     Node *next;
//     Node *prev;
//     Node(int vlu)
//     {
//         this->vlu = vlu;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// void print_next(Node *head)
// {
//     Node *tem = head;
//     while (tem != NULL)
//     {
//         cout << tem->vlu << " ";
//         tem = tem->next;
//     }
//     cout << endl;
// };
// void print_prev(Node *tail)
// {
//     Node *tem = tail;
//     while (tem != NULL)
//     {
//         cout << tem->vlu << " ";
//         tem = tem->prev;
//     }
//     cout << endl;
// }

// void insert_any_pos(Node *head, int pos, int vlu)
// {
//     Node *newnode = new Node(vlu);
//     Node *tem = head;
//     for (int i = 0; i < pos - 1; i++)
//     {
//         tem = tem->next;
//     }
//     // cout << tem->vlu;
//     newnode->next = tem->next;
//     tem->next = newnode;
//     newnode->prev = tem;
//     newnode->next->prev = newnode;
// }
// void insert_head(Node *&head, Node *&tail, int vlu)
// {
//     Node *newNode = new Node(vlu);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     newNode->next = head;
//     head->prev = newNode;
//     head = newNode;
// }
// int main()
// {
//     Node *head = new Node(10);
//     Node *a = new Node(20);
//     Node *b = new Node(40);
//     Node *c = new Node(50);
//     Node *tail = c;

//     // head->prev = NULL;
//     head->next = a;
//     a->prev = head;
//     a->next = b;
//     b->prev = a;
//     b->next = c;
//     c->prev = b;
//     // c->next = NULL;

//     int pos, vlu;
//     cin >> pos >> vlu;
//     if (pos == 0)
//     {
//         insert_head(head, tail, vlu);
//     }
//     else
//     {

//         insert_any_pos(head, pos, vlu);
//     }
//     print_next(head);
//     print_prev(tail);

//     return 0;
// }

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
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    // tail = newNode; change;
    tail = tail->next;
}

int sized(Node *head)
{
    int sum = 0;
    Node *tem = head;
    while (tem != NULL)
    {
        sum++;
        tem = tem->next;
    }
    return sum;
}
void insert_head(Node *&head, Node *&tail, int n)
{
    Node *newNode = new Node(n);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_any_pos(Node *head, int pos, int vlu)
{
    Node *newnode = new Node(vlu);
    Node *tem = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tem = tem->next;
    }
    // cout << tem->vlu;
    newnode->next = tem->next;
    tem->next = newnode;
    newnode->next->prev = newnode;
    newnode->prev = tem;
}

void print_normal(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {

        cout << tem->vlu << " ";
        tem = tem->next;
    }
    cout << endl;
}
void print_revers(Node *tail)
{

    Node *tem = tail;
    while (tem != NULL)
    {

        cout << tem->vlu << " ";
        tem = tem->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos > sized(head))
        {
            cout << "Invalid" << endl;
            // cout << "L -> ";
            // print_normal(head);
            // cout << "R -> ";
            // print_revers(tail);
        }

        else if (pos == 0)
        {
            insert_head(head, tail, val);
            cout << "L -> ";
            print_normal(head);
            cout << "R -> ";
            print_revers(tail);
        }
        else if (pos == sized(head))
        {
            insert_tail(head, tail, val);
            cout << "L -> ";
            print_normal(head);
            cout << "R -> ";
            print_revers(tail);
        }
        else
        {
            insert_any_pos(head, pos, n);

            cout << "L -> ";
            print_normal(head);
            cout << "R -> ";
            print_revers(tail);
        }
    }

    return 0;
}