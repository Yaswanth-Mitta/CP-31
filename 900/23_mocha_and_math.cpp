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
        int n;
        cin >> n;
        int ans;
        cin >> ans;
        int x;
        for (int i = 1; i < n; i++)
        {
            cin >> x;
            ans &= x;
        }
        cout << ans << endl;
    }

    return 0;
}