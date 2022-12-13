#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 123;

    int x = n;
    int reverse = 0;

    while(x != 0){
        int last_digit = x%10;
        reverse = reverse * 10 + last_digit;
        x = x/10;
    }

   cout << reverse << endl;
}

// 0(n) - time
// 0(1) - space