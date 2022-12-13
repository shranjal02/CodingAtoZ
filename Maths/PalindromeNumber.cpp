#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 123;


    int x = n;
    int reverse = 0;
    while(x != 0){
        int digit = x%10;
        reverse = reverse * 10 + digit;
        x = x / 10;

    }
    if(reverse == n){
        cout << "Yes, It's a Plaindrome" << endl;
    }
    else{
        cout << "No, It's not" << endl;
    }
}


// log(n) for revsreing n digits of inpuut integer
// 0(1) space