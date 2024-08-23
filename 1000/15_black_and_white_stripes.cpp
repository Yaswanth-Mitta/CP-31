#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;

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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll i = 0, j = 0;
        ll maxi = 0;
        ll curr = 0;
        while(j<n){
            if(j>=k){
                if(s[i] == 'B')
                    curr--;
                i++;
            }
            if(s[j] == 'B')
                curr++;
            maxi = max(curr, maxi);
            j++;
        }
        // cout << maxi << " " << k - maxi << endl;
        
        // cout << min(maxi, k - maxi) << endl;
        cout << k - maxi << endl;
    }

    return 0;
}
