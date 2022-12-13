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
void inorder(node *root, vector<int> &ans)
{

    if (root == NULL)
    {
        return;
    }
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}

int main(){
   node* root = new node(3);
   root -> left = new node(5);
   root -> left -> left = new node(6);
   root -> right = new node(8);
   
   vector<int> ans;
    inorder(root, ans);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}
