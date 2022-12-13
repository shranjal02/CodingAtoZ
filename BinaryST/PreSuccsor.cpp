#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


node* findPredecessorSuccessor(node* &root, node* &pre, node* &suc, int key){
    if(root == NULL)
    return root;

    if(root -> data == key){
        if(root -> left != NULL){
            node* temp = root -> left;

            while(temp -> right){
                temp = temp -> right;
            }
            pre = temp;
        }

        if(root -> right != NULL){
            node* temp = root -> right;
            while(temp -> left){
                temp = temp -> left;
            }

            suc = temp;
        }
    }

    if(root -> data > key){
        suc = root;
        findPredecessorSuccessor(root -> left, pre, suc, key);
    }

    if(root -> data < key){
        pre = root;
        findPredecessorSuccessor(root -> right, pre, suc, key);
    }

}

int main()
{
    node *root = new node(5);
    root->left = new node(3);
    root->left->right = new node(4);
    root->right = new node(6);

    node *pre = NULL;
    node *suc = NULL;
    int key=5;
    findPredecessorSuccessor(root, pre, suc, key);

    cout << "predecessor is " << pre -> data << endl;

    cout << "Successor is " << suc -> data << endl;

return 0;
}