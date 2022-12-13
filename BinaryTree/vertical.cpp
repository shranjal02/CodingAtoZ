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
    Node* traverseLink(Node* &root){

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
    

    // vertical
    vector<vector<int>> vertical(Node* &root){
      vector<vector<int>> ans;

        if(root == NULL){
            return ans;
        }
        // first int = Vertical line
        // second int = level;
        //multiset represent corresponding -----> node value

        map<int, map<int, multiset<int>>> nodes;

        // second pair 
        // first int = virtical (x);
        // second int = level (y);
        queue<pair<Node*, pair<int, int>>> todo;
        todo.push({root,{0,0}});
        while(!todo.empty()){
            auto p = todo.front();
            todo.pop();

            Node* node = p.first;
            int x = p.second.first;
            int y = p.second.second;

           // nodes (map)
           // x = vertical
           // y = level
            nodes[x][y].insert(node -> data);

            if(node -> left)
               todo.push({node -> left, {x-1, y+1}});
            if(node -> right)
               todo.push({node -> right,{x+1, y+1}});
        }
        for(auto p : nodes){
            vector<int> col;
            for(auto q : p.second){
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        

        }
        return ans;
    }
        
        
    
    //         for(auto i : mp){
    // for(auto j : i.second){
    //     for(auto k : j.second){
             

             // ans.push_back(k);
        // We use vector for this instead of multiset



int main(){
    Node* root = NULL;
    traverseLink(root);
    vector<vector<int>> ans;
    ans = vertical(root);

    cout << " Vertical Order " << endl;
    for(auto i : ans){
        for(auto nodevalue : i){
            cout << nodevalue << " ";
        }cout << endl;
    }


    return 0;
}















// vector<int> Vertical(node* &root){
// vector<int> ans;

// if(root == NULL)
//  return ans;


// // first int = vertical
// // second int = level
// // multi = node -> data
// map<int, map<int, vector<int> >> mp;
// // first int = virtical
// // second int = level
// queue<pair<node*, pair<int, int>>> q;
// q.push({root, {0, 0}});

// while(!q.empty()){
//     auto it = q.front();
//     q.pop();

//     node* temp = it.first;
//     int x = it.second.first;
//     int y = it.second.second;


//     mp[x][y].push_back(temp -> data);

//     if(temp -> left)
//      q.push({temp -> left, {x - 1, y +1}});

//     if(temp -> right)
//      q.push({temp -> right, {x + 1, y+1}});
// }

// for(auto i : mp){
//     for(auto j : i.second){
//         for(auto k : j.second){

//           ans.push_back(k);

//         }
//     }
// }
// return ans;



// }