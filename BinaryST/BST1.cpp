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
vector<vector<int>> levelOrder(node* root){
vector<vector<int>> ans;
queue<node* > q;
q.push(root);
q.push(NULL);

while(!q.empty()){
    node* temp = q.front();
    q.pop();
    if(temp == NULL)
    {
        cout << endl;
        if(!q.empty()){
            q.push(NULL);
        }

    }
    else{
        cout << temp -> data << " ";
        if(temp -> left){
            q.push(temp->left);
        }
        if(temp -> right){
            q.push(temp -> right);
        }

    }
}
return ans;
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

    cout << "Enter data" << endl;
    takeInput(root);
    vector<vector<int>> ans;
    levelOrder(root);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout << ans[i][j] << " ";
        }cout << endl;
    }

    return 0;
}