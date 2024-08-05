#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    vector<int> tw;

    while (t--)
    {
        int n;
        cin >> n;
        int eve = 0;
        int odd = 0;
        int x;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 0)
            {
                eve++;
                if (odd > 0)
                {
                    ans += odd - 1;
                }
                odd = 0;
            }
            else
            {
                odd++;
                if (eve > 0)
                    ans += eve - 1;
                eve = 0;
            }
        }
        if (eve > 0)
            ans += eve - 1;
        if (odd > 0)
        {
            ans += odd - 1;
        }
        cout << ans << endl;
    }

    return 0;
}