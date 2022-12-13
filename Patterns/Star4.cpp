#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i=5; i>=0; i--){
        for(int j=0; j<=5; j++){
            if(j >= i){
                cout << "*" << " ";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}



//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *