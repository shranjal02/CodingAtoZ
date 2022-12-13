#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 170;

    int x = n;
    int multi=0;
    int ans =0;
    while(x!=0){
        int digit = x%10;
        multi = digit*digit*digit;
        x = x/10;
        ans+=multi;
    }
    if(ans == n){
        cout << "Yes, Armstrong Number" << endl;
    }
    else{
        cout << "No, It's not" << endl;
    }
}


// time - 0(n)
// space - 0(1)