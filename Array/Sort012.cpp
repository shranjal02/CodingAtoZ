// Dutch National Flag Algo
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int n)
{
    int l = 0, h = n - 1, mid = 0;

    while (mid <= h)
    {
        switch (arr[mid])
        {
          // 0 present
        case 0: 
           swap(arr[l++], arr[mid++]);
           break;


          // 1 present
        case 1:        
            mid++;
            break;

          // 2 present
        case 2:
           swap(arr[mid++], arr[h--]);
            break;
        }
    }
}

int main()
{

    vector<int> arr = {0, 2, 1, 0, 1};
    solve(arr, arr.size());
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}