#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int vlu;
    Node *left;
    Node *right;
    Node(int vlu)
    {
        this->vlu = vlu;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        // 2
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);
        p->left = left;
        p->right = right;
        // 3
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}
bool search_tree(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->vlu == x)
        return true;
    if (root->vlu > x)
    {
        return search_tree(root->left, x);
    }
    else
    {
        return search_tree(root->right, x);
    }
}
int main()
{
    Node *root = input_tree();
    bool ser = search_tree(root, 18);
    if (ser)
    {
        cout << "YES - Found" << endl;
    }
    else
    {
        cout << "NO - Not Found" << endl;
    }

    return 0;
}