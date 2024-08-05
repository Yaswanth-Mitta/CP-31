#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int mini = 0;
        int k = 0;
        int prev = 0;
        for (int i = 0; i < n;i++){
            cin >> k;
            mini = max(mini, k - prev);
            prev = k;
        }
        mini = max(mini, 2 * (x - prev));
        cout << mini << endl;
    }

    return 0;
}