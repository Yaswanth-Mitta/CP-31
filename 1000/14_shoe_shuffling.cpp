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
        ll n;
        cin >> n;
        int y;
        map<ll, vector<ll>> mpp;
        // int fs = -1;
        vector<ll> arr;
        map<ll, ll> xp;
        ll mini = 2;
        for (ll i = 0; i < n;i++){

            cin >> y;
            arr.push_back(y);
            mpp[y].push_back(i + 1);
            xp[y] = 1;
        }
        for (auto&  it : mpp){
            mini = min(mini, it.second.size() * 1ll);
        }
        if(mini == 1){
            cout << -1 ;
        }else{
            for (int i = 0; i < n;i++){
                if(xp[arr[i]] == mpp[arr[i]].size())
                    xp[arr[i]] = 0;
                cout << mpp[arr[i]][xp[arr[i]]] << " ";
                xp[arr[i]]++;
                // mpp[arr[i]].pop_back();
            }
        }
        cout << endl;
    }

    return 0;
}
