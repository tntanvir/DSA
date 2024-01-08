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
void insert_BST(Node *&root, int vlu)
{
    if (root == NULL)
        root = new Node(vlu);
    if (vlu < root->vlu)
    {
        if (root->left == NULL)
            root->left = new Node(vlu);
        else
            insert_BST(root->left, vlu);
    }
    else
    {
        if (root->right == NULL)
            root->right = new Node(vlu);
        else
            insert_BST(root->right, vlu);
    }
}
void level_order(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        // kaj
        cout << f->vlu << " ";

        // childer push
        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}
int main()
{
    Node *root = input_tree();
    insert_BST(root, 12);
    insert_BST(root, 90);
    insert_BST(root, 13);
    level_order(root);
    return 0;
}