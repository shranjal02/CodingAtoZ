#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *insertNode(node *&root)
{
    int data;
    cout << "Enter data" << endl;
    cin >> data;

    root = new node(data);
    while (data == -1)
        return NULL;

    cout << "Enter left data for " << data << endl;
    root->left = insertNode(root->left);

    cout << "Enter right data for " << data << endl;
    root->right = insertNode(root->right);

    return root;
}

void Inorder(node *&root)
{
    if (root == NULL)
        return;

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

bool validBST(node *&root, int minValue, int maxValue)
{
    if (root == NULL)
        return true;

    if (root->data >= maxValue && root->data <= minValue)
        return false;

    validBST(root->left, minValue, root->data);
    validBST(root->right, root->data, maxValue);

    return true;
}

int main()
{
    node *root = NULL;
    insertNode(root);
    Inorder(root);

    bool ans = validBST(root, INT_MIN, INT_MAX);

    if (ans == true)
        cout << "Valid BST" << endl;
    else
        cout << "NOT A Valid BST" << endl;

    return 0;
}