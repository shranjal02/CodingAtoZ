#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<vector<int>> &arr, int n){
vector<vector<int>> ans;

sort(arr.begin(), arr.end());

for(int i=0; i<n; i++){
    if(ans.empty() || ans.back()[1] < arr[i][0]){
         vector<int> temp = {arr[i][0], arr[i][1]};
         ans.push_back(temp);
    }
    else{
        ans.back()[1] = max(ans.back()[1], arr[i][1]);
    }
}
return ans;
}




int main(){
   vector<vector<int>> arr = {{1,2},{2,3},{4,5}};
   vector<vector<int>> ans = solve(arr, arr.size());

   for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[0].size(); j++){
        cout << ans[i][j] << " ";
    }cout << endl;
   }
  

    return 0;
}