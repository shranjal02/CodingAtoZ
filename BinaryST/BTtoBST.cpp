// Convert binary tree to BST
#include<bits/stdc++.h>
using namespace std;

class node{
  public:
  int data;
  node* left;
  node* right;

  node(int data){
    this -> data = data;
    left = NULL;
    right = NULL;
  }
};

void storeInSet(node* &root, set<int> &s){
    if(root == NULL)
    return;

    storeInSet(root -> left, s);
    s.insert(root -> data);
    storeInSet(root -> right, s);
}


void convert(set<int> &s, node* &root){
    if(root == NULL)
    return;

convert(s, root -> left);
auto it = s.begin();
root -> data = *it;
s.erase(it);
convert(s, root -> right);

}

void binaryTreeToBST(node* &root){


    set<int> s;

    storeInSet(root, s);

    convert(s, root);

}


void printBST(node* &root){
    if(root == NULL)
    return;
    printBST(root -> left);
    cout << root -> data << " ";
    printBST(root -> right);
}

int main(){
    node* root = new node(3);
    root -> left = new node(4);
    root -> left -> right = new node(5);
    root -> right = new node(6);

    binaryTreeToBST(root);
    printBST(root);

    return 0;
}