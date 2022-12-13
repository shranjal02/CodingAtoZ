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

// void leftview (node* &root, int level, vector<int> &ans){
//     if(root == NULL){
//         return;
//     }
//     if(ans.size() == level){
//         ans.push_back(root -> data);
//     }

//     leftview(root -> left,level+1, ans);
//     leftview(root -> right,level+1, ans);
// }


void rightview (node* &root, int level, vector<int> &ans){
    if(root == NULL){
        return;
    }
    if(ans.size() == level){
        ans.push_back(root -> data);
    }

    rightview(root -> right,level+1, ans);
    rightview(root -> left,level+1, ans);

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
    vector<int> ans;
    rightview(root,0, ans);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;
    return 0;
}