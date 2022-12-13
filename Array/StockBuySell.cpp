#include<bits/stdc++.h>
using namespace std;

// Approach - 1

// 0(n`2) time complexity  --> 0(n) space complexity

int solve(vector<int> &arr, int n){
   
   
   int maxPro = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
           if(arr[j] > arr[i]){
                maxPro = max(arr[j] - arr[i], maxPro); 
           }

        }
    }
    return maxPro;
}


// Approach 2

// 0(n) time complexity
int solvee(vector<int> &arr, int n){

int maxPro = INT_MIN;
int minPrice = INT_MAX;

for(int i=0; i<n; i++){
     minPrice = min(arr[i], minPrice);
    
     maxPro = max(arr[i] - minPrice, maxPro);

}
return maxPro;
}



int main(){

   vector<int> arr = {7,1,2,3,4,6,5};
   int ans = solvee(arr, arr.size());
   cout << ans << endl;

    return 0;
}