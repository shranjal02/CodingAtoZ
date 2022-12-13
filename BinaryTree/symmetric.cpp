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

bool solve(node* &left, node* &right){

 if(left == NULL || right == NULL){
    return left == right;
 }

 if(left -> data != right -> data){
    return false;
 }
 return solve(left -> left, right -> right) && solve(left -> right, right -> left);


}

bool symmetric(node* &root){
  
bool ans;
solve(root -> left , root -> right);

if(ans == false )
cout << "NO" << endl;

else
cout << "Yes" << endl;

}


int main()
{
    node *root = NULL;

    input(root);
    
    symmetric(root);
    

    return 0;
}