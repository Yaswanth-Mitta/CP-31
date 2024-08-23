#include<bits/stdc++.h>
#include<iostream>
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
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp1, mp2;
        for (int i = 1; i < n;i++){
            mp2[s[i]]++;
        }
        int i = 1;
        mp1[s[0]]++;
        int ans = int(mp1.size() + mp2.size());
        while(i<n-1){
            mp2[s[i]]--;
            mp1[s[i]]++;
            if(mp2[s[i]] == 0)
                mp2.erase(s[i]);
            ans = max(ans, int (mp1.size() + mp2.size()));
            i++;
        }
        cout << ans << endl;
    }

    return 0;
}