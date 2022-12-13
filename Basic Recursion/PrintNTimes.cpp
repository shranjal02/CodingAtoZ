#include <bits/stdc++.h>
using namespace std;

int main()
{

    static int i = 1;
    if (i <= 10)
    {
        cout << i++ << " ";
        main();
    }

    return 0;
}

//0(n) time
//0(1) space