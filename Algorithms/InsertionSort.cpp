#include<iostream>
using namespace std;

int main(){
    int n;
    cout << " Enter size of array " << endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){

        cin >> arr[i];
    }

    for(int i=1; i<n; i++){
        int c = i;
        while(c > 0 && arr[c-1] > arr[c]){
            int temp = arr[c];
            arr[c] = arr[c-1];
            arr[c-1] = temp;
            c--;
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;


    return 0;
}