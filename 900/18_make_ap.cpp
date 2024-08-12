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
        int a, b, c;
        cin >> a >> b >> c;
        int d1 = b - a;
        int d2 = c - b;
        if ((2 * b - c) % a == 0 && (2 * b - c) / a >  0)
        {
            cout << "YES";
        }
        else if ((c + a) % (2 * b) == 0 && (c + a) / (2 * b) > 0)
        {
            cout << "YES";
        }
        else if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}