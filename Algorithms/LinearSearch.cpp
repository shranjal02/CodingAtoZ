#include<iostream>
using namespace std;

bool linear(int arr[],int n, int target){

for(int i=0; i<n; i++){
    if(target == arr[i]){
        return true;
    }
}
return false;

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
   cout << " Enter target " << endl;
   cin >> target;
   bool ans = linear(arr,n, target);
   if(ans == true){
    cout << "present" << endl;
   }
   else{
    cout << "Not Present" << endl;
   }



    return 0;
}