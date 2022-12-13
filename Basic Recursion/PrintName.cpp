#include<bits/stdc++.h>
using namespace std;

void solve(int i, int n){
    // base case
    if(i > n)
    return;
    
    cout << "GFG" << " ";
    solve(i+1, n);

}

int main(){
    int n=5;
   
   solve(1, n);

   return 0;
}

// 0(n) time / 0(n) space