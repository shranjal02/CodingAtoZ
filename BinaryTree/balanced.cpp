#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *input(node *&root)
{
    int data;
    cout << "Enter data" << endl;
    cin >> data;

    root = new node(data);

    if (data == -1)
        return NULL;

    cout << "Enter data of left " << data << endl;
    root->left = input(root->left);

    cout << " Enter data for right " << data << endl;
    root->right = input(root->right);

    return root;
}

int solve(node *&root)
{

    if (root == NULL)
        return 0;

    int leftAns = solve(root->left);
    if (leftAns == -1)
        return -1;
    int rightAns = solve(root->right);
    if (rightAns == -1)
        return -1;

    if (abs(leftAns - rightAns) > 1)
        return -1;

    return 1 + max(leftAns, rightAns);
}

bool balanced(node *&root)
{
    
    if(solve(root) == -1)
    cout << "Not A balanced tree" << endl;
    else
    cout << "A Balanced tree" << endl;
}

int main()
{
    node *root = NULL;

    input(root);
    bool ans = balanced(root);
    return 0;
}