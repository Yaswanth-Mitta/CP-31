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
        int sum = 0;
        int curr;
        for (int i = 0; i < n-1;i++){
            cin >> curr;
            sum += curr;
        }
        cout << -1 * sum  << endl;
    }

    return 0;
}