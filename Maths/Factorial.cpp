#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int res = 1;
    for (int i = 2; i <= n; i++)
    {

        res *= i;
    }
    cout << res << endl;

    return 0;
}