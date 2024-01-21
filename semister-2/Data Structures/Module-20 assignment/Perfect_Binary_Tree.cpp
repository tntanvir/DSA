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

int MaxHight(Node *root)
{
    if (root == NULL)
        return 0;
    int r = MaxHight(root->left);
    int l = MaxHight(root->right);
    return max(l, r) + 1;
};
int sum = 0;
void traves(Node *root)
{
    if (root == NULL)
        return;

    traves(root->left);
    traves(root->right);
    // cout << root->vlu << " " << endl;
    sum++;
}

int main()
{
    Node *mroot = input_tree();
    int mx = MaxHight(mroot);
    traves(mroot);
    int lv = pow(2, mx) - 1;
    // cout << lv << endl;
    // cout << sum << endl;
    if (lv == sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}