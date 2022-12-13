#include<bits/stdc++.h>
using namespace std;


// nlogn / 0(1)  --> sorting

int solve1(vector<int> &arr, int n){
sort(arr.begin(), arr.end());

for(int i=0; i<n; i++){
    if(arr[i] == arr[i+1]){
        return arr[i];
    }
}
}


// 0(n)

int find(vector<int> &arr){


int slow = arr[0];
int fast = arr[0];

while(slow != fast){
    slow = arr[slow];
    fast = arr[arr[fast]];
}

fast = arr[0];
while(slow != fast){
    slow = arr[slow];
    fast = arr[fast];
}

return arr[slow];
}

int solve2(vector<int> &arr){


int n = arr.size();
int frq[n+1] = {0};

for(int i=0; i<n; i++){
    if(frq[arr[i]] == 0){
        frq[arr[i]]++;
    }
    else{
        return arr[i];
    }
}
return 0;
}




int main(){
    vector<int> arr = {1,3,3,2,4};
    int ans = solve2(arr); 
    

    cout << ans << endl;
    return 0;
}


