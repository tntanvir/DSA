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
};

vector<int> v;
void level_print(Node *root, int lvl)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    // cout << q.front().first->vlu << " " << lvl;
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();
        // cout << node->vlu << " " << level << endl;
        if (lvl == level)
        {
            // cout << node->vlu << " ";
            v.push_back(node->vlu);
        }

        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
};

int main()
{
    Node *mroot = input_tree();
    int lvl;
    cin >> lvl;
    level_print(mroot, lvl);
    if (v.empty() == true)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        for (int x : v)
        {
            cout << x << " ";
        }
    }

    return 0;
}