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
    while(t--){
        int a, b;
        cin >> a >> b;
        int kx, ky, qx, qy;
        cin >> kx >> ky >> qx >> qy;
        set<pair<int, int>> st;
        st.insert({kx + a, ky + b});
        st.insert({kx + a, ky - b});
        st.insert({kx - a, ky + b});
        st.insert({kx - a, ky - b});

        st.insert({kx + b, ky + a});
        st.insert({kx + b, ky - a});
        st.insert({kx - b, ky + a});
        st.insert({kx - b, ky - a});
        int ans = 0;
        if(st.find({qx + a, qy - b}) != st.end()){
            ans++;
            st.erase({qx + a, qy - b});
        }
        if(st.find({qx + a, qy + b}) != st.end()){
            ans++;
            st.erase({qx + a, qy + b});
        }
        if(st.find({qx - a, qy + b}) != st.end()){
            ans++;
            st.erase({qx - a, qy + b});
        }
        if(st.find({qx - a, qy - b}) != st.end()){
            ans++;
            st.erase({qx - a, qy - b});
        }

        if(st.find({qx + b, qy + a}) != st.end()){
            ans++;
            st.erase({qx + b, qy + a});
        }
        if(st.find({qx + b, qy - a}) != st.end()){
            ans++;
            st.erase({qx + b, qy - a});
        }
        if(st.find({qx - b, qy + a}) != st.end()){
            ans++;
            st.erase({qx - b, qy + a});
        }
        if(st.find({qx - b, qy - a}) != st.end()){
            ans++;
            st.erase({qx - b, qy - a});
        }
        cout << ans << endl;
        }
    return 0;
}