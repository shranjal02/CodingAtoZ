#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<vector<int>> &arr1,int n, vector<int> &arr2){

vector<vector<int>> ans;

// if(n==0){
//     ans.push_back(arr2);
//     return ans;
// }

// insert
arr1.push_back(arr2);

// arrange
sort(arr1.begin(), arr1.end());

for(int i=0; i<n; i++){
    if(ans.empty() || ans.back()[1] < arr1[i][0]){
         vector<int> temp = {arr1[i][0], arr1[i][1]};
         ans.push_back(temp);
    }
    else{
        ans.back()[1] = max(ans.back()[1], arr1[i][1]);
    }
}
return ans;
}



int main(){
    vector<vector<int>> arr1 = {{1,2},{6,7},{7,9}};
    vector<int> arr2 = {2,3};

    vector<vector<int>> ans = solve(arr1, arr1.size(), arr2);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout << ans[i][j] << " ";
        }cout << endl;
    }




    return 0;
}