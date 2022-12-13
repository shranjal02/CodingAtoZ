#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 36;

    for (int i = 1; i <= 36; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}