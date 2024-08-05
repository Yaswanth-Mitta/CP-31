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
        int eve = 0, odd = 0;
        int x;
        int ans = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            if( x == 1)
                eve++;
            else
                odd++;
        }

        if(eve >= odd){
            if(odd %2 != 0){
                ans = 1;
            }
        }else{
            ans = ceil(double(odd - eve) / 2);
            odd -= ans;
            if(odd %2 != 0){
                ans++;
            }
        }
        cout << ans << endl;
        
    }

    return 0;
}