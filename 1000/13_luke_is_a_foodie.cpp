#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll l = 0, r = 1e18;
        ll y;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> y;
            l = max(l, y - x);
            r = min(r, y + x);
            if(l>r){
                ans++;
                l = max(0*1ll, y - x);
                r = y + x;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
