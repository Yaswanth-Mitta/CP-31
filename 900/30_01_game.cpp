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
        string s;
        cin >> s;
        int is = 0, zs = 0;
        for (int i = 0; i < s.size();i++){
            if(s[i] == '1')
                is++;
            else
                zs++;
        }
        int ans = min(is, zs);
        if(ans % 2 == 1){
            cout << "DA";
        }else{
            cout << "NET";
        }
        cout << endl;
    }

    return 0;
}