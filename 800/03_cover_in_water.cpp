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
        string s;
        cin >> s;
        int ans = 0;
        int curr = 0;
        int maxicurr = 0;
        for (int i = 0; i < s.size();i++){
            if(s[i] == '.') {
                curr++;
                maxicurr = max(maxicurr, curr);
            }else{
                ans += curr;
                curr = 0;
            }
        }
        ans += curr;
        if(maxicurr >= 3)
            cout << 2;
        else
            cout << ans;
        cout << endl;
    }

    return 0;
}