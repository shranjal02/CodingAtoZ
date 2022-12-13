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

bool solve(node* &root, vector<int> &ans, int x){

if(root == NULL)
return false;

ans.push_back(root -> data);

if(root -> data == x)
return true;

if(solve(root -> left, ans, x) || solve(root -> right, ans, x))
return true;

ans.pop_back();
return false;
}


int main(){
    node* root = new node(5);
    root -> left = new node(3);
    root -> left -> left = new node(2);
    root -> left -> right = new node(4);
    root -> right = new node(6);
    

    int x = 2;
    vector<int> res;
    bool ans;
    ans = solve(root,res, 2);

    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }cout << endl;


    return 0;
}