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
    while(t--){
        long long n, k, x;
        cin >> n >> k >> x;
        long long small = ((k) * (k + 1)) / 2;
        long long p = n - k;
        long long high = ((n) * (n + 1)) / 2 - ((p) * (p + 1)) / 2;
        if(x >= small && x <= high){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
        
    }

    return 0;
}