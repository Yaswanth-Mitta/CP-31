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
        int i = 0, j = n - 1;
        while(i<j){
            if((s[i]-'0') + (s[j]-'0') != 1){
                break;
            }
            i++;
            j--;
        }
        cout << j - i + 1 << endl;
    }

    return 0;
}