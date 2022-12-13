#include<bits/stdc++.h>
using namespace std;

void solve(int arr1[], int arr2[], int n, int m){

    // take first element from arr1 
    // compare it with first element of second array
    // if condition match, then swap

for(int i=0; i<n; i++){
    if(arr1[i] > arr2[0]){
        swap(arr1[i], arr2[0]);
    }    


      // insertion

     // then sort the second array
    // put the element in its correct position
    // so that next cycle can swap elements correctly

      for(int j=1; j<m; j++){
        int c = j;
        while(c > 0 && arr2[c-1] > arr2[c]){
            swap(arr2[c-1], arr2[c]);
        }
      }

}

}


int main(){
   int arr1[] = {1,3,5};
   int arr2[] = {2,4};
  
   solve(arr1, arr2, 3, 2);

   for(int i=0; i<3; i++){
    cout << arr1[i] << " ";
   }cout << endl;

   for(int i=0; i<2; i++){
    cout << arr2[i] << " ";
   }cout << endl;
   

    return 0;
}