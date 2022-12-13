// lowest common ancestor

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};
node* lCA(node* &root, node* &n1, node* &n2){

if(root == NULL || root == n1 || root == n2){
    return root;
}

node* left = lCA(root -> left, n1, n2);
node* right = lCA(root -> right, n1, n2);

if(left == NULL){
    return right;
}

else if(right == NULL){
    return left;
}
else{
    return root;
}

}


int main(){

    node* root = new node(5);
    root -> left = new node(4);
    root -> left -> left = new node(3);
    root -> left -> right = new node(7);

    root -> right = new node(2);


    node* ans = lCA(root, root -> left -> left , root -> left -> right);
    cout << ans -> data << endl;
    
    return 0;
}
