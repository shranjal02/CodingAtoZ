#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr)
{

    unordered_map<int, bool> mp;

    for (int i = 0; i < arr.size(); i++)
    {

        if (mp.find(arr[i]) == mp.end())
        {
            mp[arr[i]] = true;
        }
        else
        {
            cout << "Repeat Number" << arr[i] << endl;
        }
    }

    // 1,3,2,3,5,6

    // Indexing
    // 1,2,3,4,5,6  --> return 4 
    for (int i = 1; i <= arr.size(); i++)
    {
        if (mp.find(i) == mp.end())
        {
            cout << "Missing " << i << endl;
        }
    }
}

int main()
{
    vector<int> arr = {1, 3, 2, 3, 5, 6};
    solve(arr);



    return 0;
}
