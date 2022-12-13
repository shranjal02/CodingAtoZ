#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &matrix){

int row = matrix.size(), col = matrix[0].size();

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
           
        if(matrix[i][j] == 0){

            int index = i-1;
            while(index >= 0){
                if(matrix[index][j] != 0){
                    matrix[index][j] = -1;
                }
                index--;
            }

            index = i + 1;
            while(index < row){
                if(matrix[index][j] != 0){
                     matrix[index][j] = -1;
                }
                index++;
            }

           index = j-1;

           while(index >= 0){
            if(matrix[i][index] != 0){
                matrix[i][index] = -1;
            }
            index--;
           }

           index = j+1;

           while(index < col){
            if(matrix[i][index] != 0){
                matrix[i][index] = -1;
            }
            index++;
           }
        }

    }
}

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        if(matrix[i][j] < 0){
            matrix[i][j] = 0;
        }
    }
}

}





int main(){

    vector<vector<int>> matrix = {{1,2,3},{2,0,3},{4,5,6}};
   solve(matrix);
   for(int i=0; i<matrix.size(); i++){
    for(int j=0; j<matrix[0].size(); j++){
        cout << matrix[i][j] << " ";
    }cout << endl;
   }

    return 0;
}