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
// void postOrder(node* &root, vector<int> &ans){
//     if(root == NULL){
//         return;
//     }
//     postOrder(root -> left, ans);
//     postOrder(root -> right, ans);
//     ans.push_back(root -> data);
// }

void preOrder(node* &root, vector<int> &ans){
while(root != NULL)
{
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
            ans.push_back(root -> data);
            root = root -> left;
        }
        else{
            root -> left -> right = NULL;
            root = root -> right;
        }
    }
}
}

node* insertData(node* &root, int data){
// base
if(root == NULL){
    root = new node(data);
    return root;
}

if(data < root -> data){
    root -> left = insertData(root -> left, data);
}
else{
    root -> right = insertData (root -> right, data);
}
return root;

}
void takeInput(node* &root){
int data;
cin >> data;

while(data != -1){
    insertData(root, data);
    cin >> data;
}
}
int main(){
    node* root =  NULL;
   cout << " Enter data " << endl;
    takeInput(root);

   vector<int> ans;
    preOrder(root, ans);
    cout << " post order " << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}