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
        int x;

        int xorr = 0;
        for (int i = 0; i < n;i++){
            cin >> x;
            xorr ^= x;
        }
        if(n%2 == 1){
            cout << xorr;
        }else{
            if(xorr == 0)
                cout << 1;
            else cout << -1;
        }
        cout << endl;
    }

    return 0;
}