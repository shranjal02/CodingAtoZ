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

//morris inorder traversal

void morrisTraversal(node* root, vector<int> &ans){

while(root != NULL){
    if(root -> left == NULL){
      ans.push_back(root -> data);
       root = root -> right;
    }
    else{
        while(root -> left -> right != NULL && root -> left -> right != root){
            root -> left = root -> left -> right;
        }

        if(root -> left -> right == NULL){
            root -> left -> right = root;
            root = root -> left;
        }
        else{
            root -> left -> right = NULL;
            ans.push_back(root -> data);
            root = root -> right;
        }
    }
    
}


}
node *insertBinary(node *&root, int data)
{

    if (root == NULL)
    {
        root = new node(data);
        return root;
    }

    if (data < root->data)
    {
        root->left = insertBinary(root->left, data);
    }
    else
    {
        root->right = insertBinary(root->right, data);
    }
    return root;
}

void takeInput(node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        insertBinary(root, data);
        cin >> data;
    }
}

int main()
{
    node *root = NULL;
    cout << "enter data " << endl;
    takeInput(root);
    vector<int> ans;
    morrisTraversal(root, ans);
    cout << " morris traversal " << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}