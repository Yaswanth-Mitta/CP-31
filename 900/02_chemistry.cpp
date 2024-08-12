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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> hashp(26, 0);
        for (auto &it : s)
        {
            hashp[it - 'a']++;
        }
        int co = 0;
        for(auto& it : hashp){
            if(it%2 == 1)
                co++;
        }
        if( k == co || k == co-1){
            cout << "YES";
        }else if(k < co){
            cout << "NO";
        }else{
            cout << "YES" ;
        }
        cout << endl;
    }
    return 0;
}