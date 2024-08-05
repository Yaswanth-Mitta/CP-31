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
        int n;
        cin >> n;
        int x, ans = 0;
        int curr = 0;
        for (int i = 0; i < n;i++){

            cin >> x;
            if(x == 0)
                curr++;
            else
                curr = 0;
            ans = max(ans, curr);
        }
        cout << ans << endl;
    }

    return 0;
}