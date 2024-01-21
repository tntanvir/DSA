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
void insert_tail(Node *&head, Node *&tail, int n)
{
    Node *newNode = new Node(n);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}
void println(Node *head)
{
    while (head != NULL)
    {
        cout << head->vlu << " ";
        head = head->next;
    }
}
void removeElements(Node *head, int val)
{
    while (head->vlu != val)
    {
        head = head->next;
    }
    // cout << head->vlu;
    Node *tem = head;
    while (tem->next != NULL)
    {
        if (tem->next->vlu == val)
        {
            tem->next = tem->next->next;
        }
        else
        {

            tem = tem->next;
        }
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
        insert_tail(head, tail, n);
    }
    int val;
    cin >> val;
    removeElements(head, val);
    println(head);
    return 0;
}