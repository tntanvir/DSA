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

void printOuterLeft(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left)
    {
        printOuterLeft(root->left);
        cout << root->left->vlu << " ";
    }
    if (root->left == NULL && root->right)
    {
        printOuterLeft(root->right);
        cout << root->right->vlu << " ";
    }
}
void printOuterRight(Node *root)
{
    if (root == NULL)
        return;

    if (root->right)
    {
        cout << root->right->vlu << " ";
        printOuterRight(root->right);
    }
    if (root->right == NULL && root->left)
    {
        cout << root->left->vlu << " ";
        printOuterRight(root->left);
    }
}
int main()
{
    Node *mroot = input_tree();

    if (mroot->left)
    {
        printOuterLeft(mroot);
    }
    cout << mroot->vlu << " ";
    if (mroot->right)
    {
        printOuterRight(mroot);
    }

    return 0;
}