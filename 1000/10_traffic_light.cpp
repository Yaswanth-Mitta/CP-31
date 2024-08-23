#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char curr;
        cin >> curr;
        string s;
        cin >> s;
        int first = -1;
        int cr = -1;
        int ans = 0;
        for (int i = 0; i < n;i++){
            if(curr == s[i] && cr == -1){
                cr = 0;
            }
            if(s[i] == 'g'){
                ans = max(ans, cr);
                cr = -1;
            }
            if(cr != -1)
                cr++;
            if(s[i] == 'g' && first == -1)
                first = i;
        }

        if(curr == 'g'){
            ans = 0;
        }
        else if(cr != -1){
            ans = max(ans, cr + first);
        }
        cout << ans << endl;
    }

    return 0;
}