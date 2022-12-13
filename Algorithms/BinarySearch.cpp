#include<iostream>
using namespace std;


int Binary(int arr[], int n, int target){

int s=0;
int e=n-1;
while(s <= e){
    int mid = s + (e-s)/2;
    if(target > arr[mid]){
        s = mid + 1;
    }
    else if(target == arr[mid]){
        return mid;
    }
    else{
        e = mid - 1;
    }


}
return -1;

}


int main(){
   int n;
   cout << " Enter size of array " << endl;
   cin >> n;
   int arr[n];
   

   for(int i=0; i<n; i++){
    cin >> arr[i];
   }

   int target;
   cout << " Enter target" << endl;
   cin >> target;

   

   cout << Binary(arr, n, target) << endl;



    return 0;
}