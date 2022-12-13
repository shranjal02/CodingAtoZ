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


// recursion
// time limt exceeded
bool searchX(node* root, int x){
// base
if(root == NULL){
    return false;
}

if(root -> data == x){
    return true;
}

if(root -> data < x){
    return searchX(root -> right, x);
}
else{
    return searchX(root -> left, x);
}

}

// traversal 

bool search(node* root, int x){
node* temp = root;

while(temp != NULL){
    if(temp -> data == x){
        return true;
    }

    if(temp -> data > x){
        temp = temp -> left;
    }
    else{
        temp = temp -> right;
    }
}

return false;
    
}




