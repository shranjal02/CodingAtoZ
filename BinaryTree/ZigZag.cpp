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


void zigZag(node* root, vector<int> &result){

if(root == NULL)
return;

queue<node*> q;
q.push(root);
// flag
bool leftToRight = true;

while(!q.empty()){
    int n = q.size();
    vector<int> ans(n);

    for(int i=0; i<n; i++){

        node* temp = q.front();
        q.pop();

        int index = leftToRight ? i : n - 1 - i;
         ans[index] = temp -> data;

         if(temp -> left){
            q.push(temp -> left);
         }
         if(temp -> right){
            q.push(temp -> right);
         }

    }

     leftToRight = !leftToRight;
     for(auto i: ans)
        result.push_back(i);
     
}
}


node* insertData(node* &root, int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }
    if(data < root -> data){
        return insertData(root -> left, data);
    }
    if(data > root -> data){ 
        return insertData(root -> right, data);
    }
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
    node* root = NULL;
    cout << " Enter data " << endl;
    takeInput(root);
    vector<int> ans;
    zigZag(root, ans);
    cout << "Zigzag " << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";

    }cout << endl;
    return 0;
}























// void Inorder(node* &root, vector<int> &ans){
//     if(root == NULL){
//         return;
//     }
//     Inorder(root -> left, ans);
//     ans.push_back(root -> data);
//     Inorder(root -> right, ans);
// }

// vector<vector<int>> levelorder(node* &root){

// vector<vector<int>> ans;
// queue<node* > q;
// q.push(root);
// q.push(NULL);
// while(!q.empty()){
//     node* temp = q.front();
//     q.pop();
//     if(temp == NULL){
//         cout << endl;

//         if(!q.empty()){
//             q.push(NULL);
//         }
//     }
//     else{
//         cout << temp -> data << " ";
//         if(temp -> left){
//             q.push(temp -> left);
//         }

//     }
// }
// return ans;
// }