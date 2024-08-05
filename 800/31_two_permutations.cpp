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
        int n, a, b;
        cin >> n >> a >> b;
        if(b==a && a == n){
            cout << "YES";
        }
        else if(a + b < n - 1){
            cout << "YES";
        }
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}