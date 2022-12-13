#include<bits/stdc++.h>
using namespace std;

void solve(string s1){
    string s2  = s1;
    int n = s1.length();
    for(int i=0; i<=n/2; i++){
        swap(s1[i], s1[n - i - 1]);
    }

    if(s2 == s1)
    cout << "Palindrome" << endl;

    else
    cout << "No" << endl;

}

int main(){
    string s1 = "abbr";

    solve(s1);

    return 0;
}