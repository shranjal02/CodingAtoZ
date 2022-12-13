#include<bits/stdc++.h>
using namespace std;


void reverse(int arr[], int s, int e){
    if(s > e)
    return;

    swap(arr[s], arr[e]);
    reverse(arr, s+1, e-1);
}

int main(){
    int n = 5;
    int arr[] = {1,2,3,4,5};
    reverse(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;


return 0;
}

// 0(n) time / 0(1) space