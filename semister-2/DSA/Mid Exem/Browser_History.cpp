#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string vlu;
    Node *next;
    Node *prev;
    Node(string vlu)
    {
        this->vlu = vlu;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, string n)
{
    Node *newNode = new Node(n);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->vlu << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void scerch(Node *head, Node *&trage, string fnd)
{
    bool flag = true;
    Node *tem = head;
    while (tem != NULL)
    {

        if (tem->vlu == fnd)
        {
            cout << tem->vlu << endl;
            flag = false;
            trage = tem;
        }

        tem = tem->next;
    }
    if (flag == true)
    {
        cout << "Not Available" << endl;
    }
}

void prev(Node *&trage)
{
    if (trage->prev == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        trage = trage->prev;
        cout << trage->vlu << endl;
    }
}
void nexts(Node *&trage)
{
    if (trage->next == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        trage = trage->next;
        cout << trage->vlu << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *trage = NULL;
    while (true)
    {
        string n;
        cin >> n;
        if (n == "end")
        {
            break;
        }
        insert_tail(head, tail, n);
    }

    int opa;
    cin >> opa;
    while (opa--)
    {
        string scr;
        cin >> scr;
        if (scr == "visit")
        {
            string fnd;
            cin >> fnd;
            scerch(head, trage, fnd);
        }
        else if (scr == "prev")
        {
            prev(trage);
            // cout << trage->vlu << endl;
        }
        else
        {
            nexts(trage);
        }
    }

    return 0;
}