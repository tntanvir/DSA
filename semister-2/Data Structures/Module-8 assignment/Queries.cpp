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
void printll(Node *head)
{
    while (head != NULL)
    {
        cout << head->vlu << " ";
        head = head->next;
    }
    cout << endl;
}

void insert_head(Node *&head, Node *&tail, int vlu)
{
    Node *newNode = new Node(vlu);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

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

void delet_opa(Node *head, int vlu)
{

    Node *tem = head;
    for (int i = 1; i <= vlu - 1; i++)
    {
        tem = tem->next;
        if (tem == NULL)
        {
            return;
        }
    }
    if (tem->next == NULL)
    {
        return;
    }

    Node *deletNode = tem->next;
    tem->next = tem->next->next;
    delete deletNode;
}

void delet_hed(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    else
    {

        Node *deletNode = head;
        head = head->next;
        delete deletNode;
    }
}
int sizee(Node *&head)
{
    Node *tem = head;
    int sum = 0;
    while (tem != NULL)
    {
        sum++;
        tem = tem->next;
    }
    return sum;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;

    while (n)
    {
        int opa, vlu;
        cin >> opa >> vlu;
        if (opa == 0)
        {
            insert_head(head, tail, vlu);
        }
        else if (opa == 1)
        {
            insert_tail(head, vlu);
        }
        else
        {
            if (vlu <= sizee(head))
            {
                if (vlu == 0)
                {
                    delet_hed(head);
                }
                else
                {

                    delet_opa(head, vlu);
                }
            }
        }
        printll(head);
        n--;
    }

    return 0;
}