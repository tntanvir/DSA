#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int vlu;
    Node *next;
};
int main()
{
    Node a, b;
    a.vlu = 10;
    b.vlu = 20;

    a.next = &b;
    b.next = NULL;
    cout << a.vlu << " " << a.next->vlu;

    return 0;
}