#include<bits/stdc++.h>
using namespace std;


vector<int> solve(vector<int> &arr, int n, int &target){

vector<int> ans;

unordered_map<int, int> mp;

for(int i=0; i<n; i++){

    if(mp.find(target - arr[i]) != mp.end()){
          ans.push_back(mp[target - arr[i]]);
          ans.push_back(i);
          return ans;


    }
    mp[arr[i]] = i;
}
return ans;


}



int main(){

   vector<int> arr = {1,2,3,5};
   int target = 4;
    vector<int> ans = solve(arr, arr.size(), target);

for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
}cout << endl;

    return 0;
}