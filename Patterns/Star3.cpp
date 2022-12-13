#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows to print "<< endl;
    cin >> n;

    for(int i=n; i>=0; i--){
     for(int j=0; j<=n; j++){

        if(j <= i){
            cout << "*" << " ";
        }
        else{
            cout << " ";

        }

     } 
     cout << endl;

    }
}


//*****
//****
//***
//**
//*