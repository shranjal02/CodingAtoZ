#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

int findh(node *&root, int &diameter)
{

    if (root == NULL)
    {
        return 0;
    }

    int left = findh(root->left, diameter);
    int right = findh(root->right, diameter);

    diameter = max(diameter, left + right);

    return 1 + max(left, right);
}

int diameterFind(node *&root)
{

    int diameter = 0;
    findh(root, diameter);
    return diameter;
}

int main()
{
    node *root = new node(5);
    root->left = new node(4);
    root->left->left = new node(3);
    root->left->right = new node(1);
    root->left->left->left = new node(6);

    root->right = new node(1);
    root->right->right = new node(2);
    root->right->right -> right = new node(8);
    root->right->right->left = new node(2);

    int ans = diameterFind(root);

    cout << ans << endl;

    return 0;
}