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
        long long n;
        cin >> n;
        if(n%2 == 1){
            cout << "YES";
        }else{
            while(n%2 == 0 && n > 0){
                n /= 2;
            }
            if(n > 1)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }

    // cout << __gcd(0, 9);

    return 0;
}