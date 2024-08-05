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
    while (t--)
    {
        string s;
        int ans = 0;
        int hx, vx;
        for (int i = 0; i < 10; i++)
        {
            cin >> s;
            for (int j = 0; j < 10; j++)
            {
                if (s[j] == 'X')
                {
                    hx = min(i, 9 - i);
                    vx = min(j, 9 - j);
                    ans += 1 + min(hx, vx);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}