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
        long long a, b;
        cin >> a >> b;
        // cout << abs(a - b) << " ";
        if(a == 0 || b == 0 ){
            cout << max(a, b) << " " << 0 << endl;
        }else if( a == b){
            cout << 0 << " " << 0 << endl;

        }
        else{

            long long int diff = abs(a - b);
            cout << diff << " ";
            cout << min(a % diff, diff - (a % diff)) << endl;

        }
        
    }

    // cout << __gcd(0, 9);

    return 0;
}