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


// find minimum
node* miniMum(node* root){
node* temp = root;

while(temp -> left != NULL){
    temp = temp -> left;
}
return temp;

}

// maximum

node* maxiMum(node* root){
node* temp = root;

while(temp -> right != NULL)
{
    temp = temp -> right;
}
return temp;

}