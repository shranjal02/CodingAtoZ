// Find factorial of a number
#include<bits/stdc++.h>
using namespace std;


int solve(int n){

    // base case
    if(n == 0 || n == 1){
        return 1;

    }

    return n*solve(n-1);
}

int main(){

    int n = 5;
    cout <<  solve(n) << endl;

    return 0;
}

// 0(n) time / 0(n) space