#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};


void inOrder(node* &root, vector<int> &ans){
if(root == NULL){
    return;
}
 inOrder(root -> left, ans);
  ans.push_back(root -> data);
 inOrder(root -> right, ans);
}


node* insertAt(node* &root, int data){
// base
if(root == NULL){
    root = new node(data);
    return root;
}

if(data < root -> data){
    root -> left = insertAt(root -> left, data);
}

else{
    root -> right = insertAt(root -> right, data);
}
return root;
}

void takeInput(node* &root){
int data;
cin >> data;

while(data != -1){
    insertAt(root, data);
    cin >> data;
}
}


int main(){
    node* root = NULL;
   cout << " enter nput " << endl;
    takeInput(root);
    cout << " inorder traversal " << endl;
    vector<int> ans;
    inOrder(root, ans);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
}