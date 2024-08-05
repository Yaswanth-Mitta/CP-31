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
        int x, prev;
        int ans = 0, mini = 1e9;
        bool puc = false;
        cin >> prev;
        for (int i = 1; i < n;i++){
            cin >> x;
            mini = min(mini, ((x-prev)/2) + 1);
            if(x-prev < 0)
                puc = true;
            prev = x;
        }
        if(puc){
            cout << 0 << endl;
        }else{

            mini = max(mini, 0);
            cout << mini << endl;
        }
    }

    // cout << -1 / 2;

    return 0;
}