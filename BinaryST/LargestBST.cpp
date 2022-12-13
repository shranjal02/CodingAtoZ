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
        left = NULL;
        right = NULL;
    }
};

vector<int> validSolve(node *&root)
{
    if (root == NULL)
    {
        return {INT_MAX, INT_MIN, 0};
    }

    if (root->left == NULL && root->right == NULL)
    {
        return {root->data, root->data, 1};
    }

    vector<int> left = validSolve(root->left);
    vector<int> right = validSolve(root->right);

    vector<int> ans(3, 0);

    if ((left[1] < root->data) && (right[0] > root->data))
    {

        ans[0] = min(left[0], min(right[0], root->data));
        ans[1] = max(right[1], max(left[1], root->data));
        ans[2] = 1 + left[2] + right[2];
        return ans;
    }

    ans[0] = INT_MIN;
    ans[1] = INT_MAX;
    ans[2] = max(left[2], right[2]);
    return ans;
}

int solve(node *&root)
{

    return validSolve(root)[2];

}

int main()
{
    node *root = new node(5);
    root->left = new node(6);
    root->right = new node(4);
    root->left->left = new node(2);

    printf(" Size of the largest BST is %d\n", solve(root));

    return 0;
}
