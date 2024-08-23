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
        int n , k , q;
        cin >> n >> k >> q;
        long long ans = 0;
        long long temp = 0;
        long long x;
        for (int i = 0; i < n;i++){
            cin >> x;
            if(x <= q){
                temp++;
            }else{
                if(temp >= k){
                    temp = temp - k + 1;
                    ans += ((temp) * (temp + 1)) / 2;
                }
                temp = 0;
            }

        }
        if(temp >= k){
            temp = temp - k + 1;
            ans += ((temp) * (temp + 1)) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}
