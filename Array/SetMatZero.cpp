// Second Approach
#include<bits/stdc++.h>
using namespace std;


// void solve(vector<vector<int>> &matrix){

// int row = matrix.size(), col = matrix[0].size();
// vector<int> dummy1(row, -1), dummy2(col , -1);

// for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//         if(matrix[i][j] == 0){
//             dummy1[i] = 0;
//             dummy2[j] = 0;
//         }
//     }
// }
// for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//         if(dummy1[i] == 0 || dummy2[j] == 0){
//                matrix[i][j] = 0;
//         }
//     }
// }


// }


void solve(vector<vector<int>> &matrix){

int col0=1, row = matrix.size(), col = matrix[0].size();

for(int i=0; i<row; i++){
    if(matrix[i][0] == 0) col0 = 0;
    for(int j = 1; j<col; j++){
        if(matrix[i][j] == 0){
            matrix[i][0] = 0;
            matrix[0][j] = 0;
        }
    }
}

for(int i=row-1; i>=0; i--){
    for(int j=col-1; j>=0; j--){
       if(matrix[i][0] == 0 || matrix[0][j] == 0){
           matrix[i][j] = 0;
       }

    }
    // if(col0 == 0){
    //     matrix[i][0] = 0;
    // }
}
}



int main(){

    vector<vector<int>> arr = {{0,2,3},{4,0,5},{6,2,9}};
    solve(arr);
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    return 0;
}