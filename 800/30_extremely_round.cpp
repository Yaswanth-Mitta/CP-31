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
        string x = to_string(n);
        int len = log10(n) + 1;
        // cout << len << " ";
        // cout << len << " ";
        cout << (len - 1) * 9 + (x[0] - '0');
        cout << endl;
    }

    return 0;
}