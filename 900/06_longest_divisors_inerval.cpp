#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long  i = 1;
        for (; i <= n;i++){
            if(n%i != 0)
                break;
        }
        cout << i - 1 << endl;
    }

    return 0;
}