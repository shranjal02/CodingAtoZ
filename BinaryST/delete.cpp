#include<bits/stdc++.h>
using namespace std;

class node{
    public:
   int data;
   node* left;
   node* right;

   // constructor
   node(int data){
    this -> data = data;
    this -> left = NULL;
    this -> right = NULL;
   }

};



node* InsertData(node* &root, int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }

    if(root -> data > data)
    root -> left = InsertData(root -> left, data);

    if(root -> data < data)
    root -> right = InsertData(root -> right, data);

    return root;
}

void Input(node* &root){
    int data;
    cout << "Enter data " << endl;
    cin >> data;
    while(data != -1){
        InsertData(root, data);
        cin >> data;
    }
}

// find minimum
node* miniMum(node* root){
node* temp = root;

while(temp -> left != NULL){
    temp = temp -> left;
}
return temp;

}

// maximum

node* maxiMum(node* root){
node* temp = root;

while(temp -> right != NULL)
{
    temp = temp -> right;
}
return temp;

}


node* deleteBst(node* root, int x){

if(root == NULL){
    return root;
}

if(root -> data == x ){
// first 0 child
if(root -> left == NULL && root -> right == NULL){
    delete root;
    return NULL;
}
// single child

// left child

else if(root -> left != NULL && root -> right == NULL){
 node* temp = root -> left;
 delete root;
 return temp;
}
 // right child
else if(root -> left == NULL && root -> right != NULL){
node* temp = root -> right;
delete root;
return temp;
 }

// two child
else{
//miniMum - right part

int min = miniMum(root -> right) -> data;
root -> data = min;
root -> right = deleteBst(root -> right, min);
return root;

//maxiMum - left part
// int max = maxiMum(root -> left) -> data;
// root -> data = max;
// root -> left = deleteBst(root -> left, max);
// return root;
}

}

else if(root -> data > x){
    return deleteBst(root -> left, x); 
}
else{
    return deleteBst(root -> right, x);
}

}


void Inorder(node* &root){
    if(root == NULL)
    return;
    

    Inorder(root -> left); 
    cout << root -> data << " ";
    Inorder(root -> right);
    cout << " ";
}


int main(){
    node* root = NULL;
    Input(root);
    Inorder(root);
    int x;
    cout << "Enter key" << endl;
    cin >> x;
    deleteBst(root,x);
    Inorder(root);

return 0;
}