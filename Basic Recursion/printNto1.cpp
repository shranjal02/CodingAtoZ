#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;

    static int i = n;

    if(i >= 1){
        cout << i-- << " ";
        main();
    }

return 0;
}

