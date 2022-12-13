#include<bits/stdc++.h>
using namespace std;

// check is X exist in sorted array or not?



int main(){
    int arr[] = {1,2,4,5};
    int n = 4;
    
    bool ans = binary_search(arr, arr+n, 5);

    cout << ans << endl;

    return 0;
}



// Lower Bound 

int main(){
    int arr[] = {1,2,4,5};
    int n = 5;

    int index = lower_bound(arr, arr+n, 4 ) - arr;  // return 2
    int index = lower_bound(arr, arr+n, 3 ) - arr;  // return 2 (next elemet)
    int index = lower_bound(arr, arr+n, 6 ) - arr;  // return 4 (after 5)


    // if I want to perform it in my vector -->
    // vector<int> arr = {1,2,3};

    // int index = lower_bound(arr.begin(), arr.end(), arr) - arr.begin();//


    cout << index << endl;


    return 0;

}

// Upper bound

// it will always return next greater element

int main(){

 int arr[] = {1,2,2,2,3};
 int n = 5;

 int index = upper_bound(arr, arr+n, 2) - arr;

 cout << index << endl;

return 0;

}

