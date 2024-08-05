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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool cc = false;
        if(b > d){
            cc = true;
        }
        int ans = 0;
        ans = abs(d - b);
        a += (d - b);

        if(!cc){

            if(a >= c){
                ans += (a - c);
                cout << ans;
            }else{
                cout << -1;
            }
        }else{
            cout << -1;
        }
        cout << endl;
    }

    return 0;
}