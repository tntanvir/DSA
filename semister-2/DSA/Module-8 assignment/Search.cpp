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
void add_tail(Node *&head, Node *&tail, int n)
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

void find_number(Node *&head, int n)
{
    int sum = 0;
    bool flg = true;
    while (head != NULL)
    {
        if (head->vlu == n)
        {
            flg = false;
            cout << sum << endl;
            break;
        }
        sum++;
        head = head->next;
    }
    if (flg)
    {
        cout << -1 << endl;
    }
}
int main()
{

    int lop;
    cin >> lop;
    for (int i = 0; i < lop; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            int n;
            cin >> n;
            if (n == -1)
                break;
            add_tail(head, tail, n);
        }
        int fin;
        cin >> fin;
        // find_number(head, fin);
        int sum = 0;
        bool flg = true;
        Node *tem = head;
        while (tem != NULL)
        {
            if (tem->vlu == fin)
            {
                flg = false;
                cout << sum << endl;
                break;
            }
            sum++;
            tem = tem->next;
        }
        if (flg)
        {
            cout << -1 << endl;
        }
        head = NULL;
        tail = NULL;
    }

    return 0;
}
