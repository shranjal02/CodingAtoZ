#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 1234;
    int count = 0;
    int x = n;
    while(x != 0){
        
        x = x/10;
        count++;
    }

    cout << count << endl;
}