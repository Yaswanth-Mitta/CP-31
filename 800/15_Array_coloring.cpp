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
    //    NO of odd numbers decides the parity 
    // if odd numbers are even even parity 
    // if odd numbers are odd no same parity
        int n, x, o = 0;
        cin >> n;
        for (int i = 0; i < n;i++){
            cin >> x;
            if(x%2 == 1)
                o++;
        }
        if(o %2 == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}