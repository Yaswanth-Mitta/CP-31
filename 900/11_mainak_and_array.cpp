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
        int first;
        cin >> first;
        int x = -1;
        int mini = first;
        int maxi = first;
        int md = 0;
        int prev = first;
        for (int i = 1; i < n;i++){
            cin >> x;
            md = max(md, prev - x);
            mini = min(mini, x);
            maxi = max(maxi, x);
            prev = x;
        }
        if(x == -1)
            x = first;
        cout << max({md, maxi - first, x - mini}) << endl;
    }

    return 0;
}
