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
        int a, b, n;
        cin >> a >> b >> n;
        long long ans = 0;
        int x;
        for (int i = 0; i < n;i++){
            cin >> x;
            ans += min(x, a-1) ;
        }
        ans += b;
        // ans--;
        cout << ans << endl;
        }

    return 0;
}