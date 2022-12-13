#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n == 0)
    return 0;

    if(n == 1)
    return 1;

    return solve(n-1) + solve(n-2);
}


int main(){
    int n = 5;
 
    for(int i=0; i<n; i++){
        cout << solve(i) << " ";
    }cout << endl;
    return 0;
}

// Time Complexity: O(2^n)
// Auxiliary Space: O(n)


