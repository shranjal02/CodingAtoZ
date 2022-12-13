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

node* binaryTree(node* &root){

    int data;
    cout << " enter data " << endl;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout << " enter data for left " << data << endl;
    root -> left = binaryTree(root-> left);

    cout << "enter data for right " << data << endl;
    root -> right = binaryTree(root -> right);

return root;
}

bool isLeaf(node* &root){
    return !root -> left && !root -> right;
}
void addLeft(node* &root, vector<int> &res){
node* temp = root -> left;
while(temp){
    if(!isLeaf(temp))
    {
        res.push_back(temp -> data);
    }
    if(temp -> left)
       temp = temp -> left;
    else
       temp = temp -> right;
}
}

void addleaf(node* &root, vector<int> &res){
    if(isLeaf(root))
    {
        res.push_back(root -> data);
        return;
    }
    if(root -> left)
       addleaf(root -> left, res);
    if(root -> right)
       addleaf(root -> right, res);
}

void addRight(node* &root, vector<int> &res){
node* temp = root -> right;
vector<int> cur;
while(temp){
    if(!isLeaf(temp))
    {
        cur.push_back(temp -> data);
    }
    if(temp -> right)
       temp = temp -> right;
    else
       temp = temp -> left;
}
for(int i=cur.size()-1; i>=0; --i){
   res.push_back(cur[i]);
}
}

vector<int> print(node* &root){
    vector<int> res;
    if(!root) 
    return res;
    if(!isLeaf(root))
    res.push_back(root -> data);

    addLeft(root, res);
    addleaf(root, res);
    addRight(root, res);

    return res;
}

int main(){
    node* root = NULL;
    binaryTree(root);
    vector<int> result = print(root);

    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }cout << endl;
    return 0;
}