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
        int x, y;
        cin >> x >> y;
        string a, b;
        cin >> a >> b;
        int i = 0;
        int ans = -1;
        for (int i = 0; i <= 5;i++){
            if(a.find(b) != string::npos){
                ans = i;
                break;
            }
            a += a;
        }
        cout << ans << endl;
    }

    return 0;
}