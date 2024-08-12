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

        long long xo, n;
        cin >> xo >> n;
        long long ans;
        if(xo%2 == 0) {
            long long x = n % 4;
            long long y = ceil((double)n / 4);
            if(x == 0) {
                cout << 0 + xo;
            }else if( x == 1){
                cout << (-1 + (y - 1) * -4) + xo;
            }else if( x == 2){
                cout << 1 + xo;
            }else{
                cout << (y * 4) + xo;
            }
        }else{
            long long x = n % 4;
            long long y = ceil((double)n / 4);
            long long ans = xo;
            if(x == 0){
                ans = xo;
            }else if( x == 1){
                ans += (1 + (y - 1) * 4) ;
            }else if( x == 3){
                ans += xo - 1;
            }else{
                ans += (-3 + (y - 1) * -4) - 1;
            }
            cout << ans;
        }
        cout <<  endl;
    }

    cout << 87178291129 % 4;

    return 0;
}