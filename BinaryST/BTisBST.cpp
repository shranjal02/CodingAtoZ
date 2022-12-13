// check Binary Tree is BST or not?
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

node* insertData(node* &root, int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }

    if(root -> data > data){
         root -> left = insertData(root -> left, data);
    }
    if(root -> data < data){
        root -> right = insertData(root -> right, data);
    }
    return root;
}

void Input(node* &root){
    int data;
    cout << "Enter data" << endl;
    cin >> data;

    while(data != -1){
        insertData(root, data);
        cin >> data;
    }
}

void Inorder(node* &root){
    if(root == NULL){
        return;
    }

    Inorder(root -> left);
    cout << root -> data  << " ";
    Inorder(root -> right);
}

bool validBST(node* &root, int min, int max){
    if(root == NULL)
        return true;
    

    if(root -> data >= max && root -> data <= min)
        return false;
    

   return validBST(root -> left, min, root -> data) && validBST(root -> right, root -> data, max);   
}

int main(){
    node* root = NULL;
    Input(root);
    Inorder(root);

    bool ans = validBST(root, INT_MIN, INT_MAX);

    if(ans == true){
        cout << "That's a Valid BST" << endl;
    }
    else{
        cout << "That's not a Valid BST" << endl;
    }

    return 0;
}