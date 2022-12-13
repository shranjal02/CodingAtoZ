#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr,int n, int target){

int count=0;
for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(arr[i] + arr[j] == target){
           count++;
        }
    }
}
return count;

}

int main(){
    vector<int> arr = {1,2,4,-1};
    int n = arr.size();
    int target = 3;
    int ans = solve(arr,n, target);
    cout << ans << endl;

    return 0;
}

// count number of pairs whose sum is equal to target 