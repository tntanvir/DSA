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
vector<int> v;
void whitOutLeaf(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        // cout << root->vlu << " ";
        v.push_back(root->vlu);
        return;
    }
    else
    {
        whitOutLeaf(root->left);
        whitOutLeaf(root->right);
    }
};

int main()
{
    Node *mroot = input_tree();
    whitOutLeaf(mroot);
    sort(v.begin(), v.end(), greater<int>());
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}