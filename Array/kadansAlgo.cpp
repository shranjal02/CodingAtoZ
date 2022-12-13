#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int n){

int sum=0;
int maxi = INT_MIN;
for(int i=0; i<n; i++){
   sum+=arr[i];

   if(sum < 0){
    sum = 0;
   }

   maxi = max(sum, maxi);
}
return maxi;
}





int main(){
    vector<int> arr = {-1,2,3,0};
    int ans = solve(arr, arr.size());
    cout << ans << endl;


    return 0;
}