#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;
    
    // constructor
    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};
    Node* traverseLink(Node* root){

        cout <<"Enter the data: " << endl;
         int data;
         cin >> data;
         root = new Node(data);

         if(data == -1){
            return NULL;
         }
         // enter left
         cout << " Enter for left " << data << endl;
         root -> left = traverseLink(root -> left);
         // enter right
         cout << "Enter for right " << data << endl;
         root -> right = traverseLink(root -> right);
         return root;
    }
    
vector<vector<int>> levelOrder(Node *root)
{
    vector<vector<int>> ans;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return ans;
}

int main(){
    Node* root = NULL;
    cout << " enter data " << endl;
    root = traverseLink(root);

    vector<vector<int>> ans;
    levelOrder(root);
    cout << "level order traversal " << endl;
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout << ans[i][j] << " ";
        }cout << endl;
    }

    return 0;
}