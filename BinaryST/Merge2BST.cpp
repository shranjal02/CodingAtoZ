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
        this -> left = NULL;
        this -> right = NULL;
    }
};

void Inorder(node *&root, vector<int> &ans)
{
    if (root == NULL)
        return;

    Inorder(root->left, ans);
    ans.push_back(root->data);
    Inorder(root->right, ans);
}

vector<int> MergeInorder(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> ans(arr1.size() + arr2.size());

    int i = 0, j = 0;
    int k = 0;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            ans[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            ans[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < arr1.size())
    {
        ans[k] = arr1[i];
        k++;
        i++;
    }

    while (j < arr2.size())
    {
        ans[k] = arr2[j];
        k++;
        j++;
    }

    return ans;
}

node *makingBST(int s, int e, vector<int> &arr)
{
    if (s > e)
        return NULL;
    int mid = e - (s+e)/2;

    node *root = new node(arr[mid]);

    root->left = makingBST(0, mid - 1, arr);
    root->right = makingBST(mid + 1, e, arr);

    return root;
}

node *mergeTwoBST(node *&root1, node *&root2)
{

    vector<int> Inorder1, Inorder2;

    Inorder(root1, Inorder1);
    Inorder(root2, Inorder2);

    vector<int> ans = MergeInorder(Inorder1, Inorder2);
    int s = 0, e = ans.size() - 1;
    node* res = makingBST(s, e, ans);
    return res;
}

void printBST(node *&root)
{
    while(root != NULL)
    {
    printBST(root->left);
    cout << root->data << " ";
    printBST(root->right);
    }
}



int main()
{
    node *root1 = NULL;
    root1 = new node(5);
    root1->left = new node(3);
    root1->left->right = new node(4);
    root1->right = new node(9);

    node *root2 = NULL;
    root2 = new node(8);
    root2->left = new node(6);
    root2->left->right = new node(7);

    node * ans = mergeTwoBST(root1, root2);

    printBST(ans);

    return 0;
}