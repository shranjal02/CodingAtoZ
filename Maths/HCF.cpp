// Highest Common Factor or Greatest common divisor
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1 = 3;
    int num2 = 6;


    int ans =0;

    for(int i=1; i <= min(num1, num2); i++){
        if((num1 % i == 0) || (num2 % i == 0)){
            ans = i;
        }
    }
    cout << ans << endl;
}