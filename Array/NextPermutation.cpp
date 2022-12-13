#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int n){

int k,l;
for( k = n-2; k>=0; k--){
    if(arr[k] < arr[k+1])
    break;
}
if(k < 0){
    reverse(arr.begin(), arr.end());
}
else{
    for(l=n-1; l>=0; l--){
        if(arr[l] > arr[k])
        break;
    }
swap(arr[k], arr[l]);
reverse(arr.begin() + k + 1, arr.end());
}
}




int main(){

    vector<int> arr = {1,2,3};
    //1 3 2
    solve(arr, arr.size());

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }cout << endl;


    // Using inbuilt Function

    // int arr[] = {1,2,3};

    // next_permutation(arr, arr+3);
    // cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;



    return 0;
}