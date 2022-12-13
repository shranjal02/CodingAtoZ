#include <bits/stdc++.h>
using namespace std;


class node{
 public:
  int data;
  node* left;
  node* right;
  node* next;
   
  node(int data){
    this -> data = data;
    this -> left = NULL;
    this -> right = NULL;
    this -> next = NULL;
  }

};

node* Insert(node* &root, int data){

if(root == NULL){
    root = new node(data);
    return root;
}

if(root -> data > data){
    root -> left = Insert(root -> left, data);
}
else{
    root -> right = Insert(root -> right, data);
}

return root;
}

void Input(node* &root){
    int data;
    cout << "Enter data " << endl;
    cin >> data;

    while(data != -1){
        Insert(root, data);
        cin >> data;
    }
}

// time - 0(n) (traversing all the nodes)
// space - 0(1) (lets say stack is not taking any space)

node* solve(node* &root){
    if(root == NULL || root -> left == NULL || root -> right == NULL){
        return root;
    }
    root -> left -> next = root -> right;

    if(root -> next != NULL){
        root -> right -> next = root -> next -> left;
    }
    solve(root -> left);
    solve(root -> right);

    return root;
}

void Inorder(node* &root){
    if(root == NULL){
        return;
    }

    Inorder(root -> left);
    cout << root -> data << " ";
    Inorder(root -> right);
    cout << " ";
}




int main(){
    node* root = NULL;
    Input(root);
 
    node* ans = solve(root);
    Inorder(root);



    

    return 0;
}



























// Node* connect(Node* root) {
//     if(root == NULL || root -> left == NULL || root -> right == NULL){
//         return root;
//     }

//     root -> left -> next = root -> right;

//     if(root -> next != NULL){
//         root -> right -> next = root -> next -> left;
//     }
//     connect(root -> left);
//     connect(root -> right);

//     return root;