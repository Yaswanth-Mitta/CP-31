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
        long long n, k;
        cin >> n >> k;
        if(n%2 == 0 || k==1 || k==n){
            cout << "YES";
        }else{
            if(k > n)
                cout << "NO";
            else if(k%2 == 1)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }

    return 0;
}