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
int main()
{
    Node a(10);
    Node b(20);

    a.next = &b;
    // b.next = NULL;
    cout << a.vlu << " " << a.next->vlu;

    return 0;
}