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
        int x, k;
        cin >> x >> k;
        if(x % k != 0){
            cout << 1 << endl;
            cout << x;
        }else {
            cout << 2 << endl;
            cout << x + 1 << " " <<  -1;
        }
        cout << endl;
    }

    return 0;
}