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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxi = 1;
        int curr = 1;
        for (int i = 1; i < s.size();i++){
            if(s[i] == s[i-1]){
                curr++;
            }else{
                curr = 1;
            }
            maxi = max(maxi, curr);
        }
        cout << maxi + 1 << endl;
    }

    return 0;
}