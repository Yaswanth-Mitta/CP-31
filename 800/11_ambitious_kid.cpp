#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    // int t;
    // cin >> t;
    // while (t--)
    // {
        int n;
        cin >> n;
        int ans = 1e9;
        int x;
        for (int i = 0; i < n;i++){
            cin >> x;
            ans = min(ans, abs(x));
        }
        cout << ans << endl;
    // }

    return 0;
}