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
        int n;
        cin >> n;
        long long z = 0, o = 0;
        long long sum = 0;
        long long x;
        for (int i = 0; i < n;i++){
            cin >> x;
            if(x == 0){
                z++;
            }
            if(x == 1)
                o++;
            sum += x;
        }
        // long long ans = o * (1ll << z);
        long long ans = o * (pow(2 , z));

        cout << ans << endl;
    }

    return 0;
}
