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
        map<long , long long > mpp1 , mpp2;
        long long prev = -1;
        int n;
        cin >> n;
        long long x;
        long long ct = 0;
        set<long long> st;
        for (int i = 0; i < n;i++){
            cin >> x;
            if(prev == x){
                ct++;
            }else{
                
                ct = 1;
            }
            mpp1[x] = max(mpp1[x], ct);
            st.insert(x);
            prev = x;
        }
        prev = -1;
        ct = 0;
        for (int i = 0; i < n;i++){
            cin >> x;
            if(prev == x){
                ct++;
            }else{
                
                ct = 1;
            }
            mpp2[x] = max(mpp2[x], ct);
            st.insert(x);
            prev = x;
        }
        long long ans = 0;
        for(auto& it : st){
            ans = max(ans, mpp1[it] + mpp2[it]);
        }
        cout << ans << endl;
    }

    return 0;
}