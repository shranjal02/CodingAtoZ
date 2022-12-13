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

vector<int> bottomView(node* root){

vector<int> ans;

if(root == NULL){
    return ans;
}
map<int, int> mp;
queue<pair<node*, int>> q;

q.push({root, 0});
while(q.empty()){

   auto it = q.front();
   q.pop();

   node* temp = it.first;
   int line = it.second;

   mp[line] = temp -> data;

   if(temp -> left != NULL){
    q.push({temp -> left, line - 1});
   }

   if(temp -> right != NULL){
    q.push({temp -> right, line + 1});
   }

  for(auto it : mp){
    ans.push_back(it.second);
  }

}
return ans;

}