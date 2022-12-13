#include <bits/stdc++.h>
using namespace std;

bool solve(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 21;
    bool ans = solve(n);

    if(n != 1 && ans == true){
       cout << "Prime Number" << endl;
    }
    else{
        cout << "No, It's not" << endl;
    }
    return 0;
}

//0(n) time / 0(1) space