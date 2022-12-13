#include <bits/stdc++.h>
using namespace std;

void solve(int &n, vector<vector<int>> &ans)
{
    for (int i = 0; i <n; i++)
    {
        ans[i].resize(i + 1);

        ans[i][0] = ans[i][i] = 1;

        for (int j = 1; j < i; j++)
        
          {  ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];}
        
    }
}

int main()
{
    int numRows = 5;
    vector<vector<int>> ans(numRows);
    solve(numRows, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}