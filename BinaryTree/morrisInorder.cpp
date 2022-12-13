#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

vector<int> morris(node* &root){
vector<int> ans;

node* curr = root;
while(curr != NULL){
    if(curr -> left == NULL){
        ans.push_back(curr -> data);
        curr = curr -> right;
    }
    else{
        node* prev = curr -> left;
        while(prev -> right != NULL && prev -> right != root){
            prev = prev -> right;
        }
        if(prev -> right == NULL){
            prev -> right  = root;
            curr = curr -> left;
        }
        else{
            prev -> right = NULL;
            ans.push_back(curr -> data);
            curr = curr -> right;
        }
    }
}
return ans;
}


int main(){

    node* root = new node(5);
    root -> left = new node(4);
    root -> left -> right = new node(3);

    root -> right = new node(7);

    vector<int> ans = morris(root);

   for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
   }cout << endl;

    return 0;
}