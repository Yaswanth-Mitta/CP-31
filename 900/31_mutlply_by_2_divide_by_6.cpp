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
        if(n == 1){
            cout << 0;
        }else{
            long long n2 = 0;
            long long n3 = 0;
            while(n%2 == 0 && n >= 2){
                n2++;
                n /= 2;
            }
            while(n%3 == 0 && n>=3){
                n3++;
                n /= 3;
            }
            if(n3 >= n2 && n == 1){
                cout << n3 - n2 + (n3);
            }else{
                cout << -1;
            }
            // cout << "  " << n2 << "  " << n3;
        }
        cout << endl;
    }

    return 0;
}