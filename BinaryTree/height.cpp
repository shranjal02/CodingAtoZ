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

int height(node* &root){

if(root == NULL){
    return 0;
}

int left = height(root -> left);
int right = height(root -> right);

return 1+max(left, right);
}



node* insert (node* &root){

int data;
cout << " Enter data " << endl;
cin >> data;
root = new node(data);
if(data == -1){
    return NULL;
}

cout << " Enter data for left " << data << endl;
root -> left = insert (root -> left);

cout << " Enter data for right " << data << endl;
root -> right = insert(root -> right);

return root;

}


int main(){
    node* root = NULL;
    insert(root);
    int ans = height(root);
    cout << ans << endl;



    return 0;
}