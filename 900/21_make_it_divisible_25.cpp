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
        bool zz = false;
        bool ff = false;
        string s;
        cin >> s;
        int i=0;
        int left = 0;
        for ( i = s.size() - 1; i >= 0;i--){
            left++;
            if((ff || zz) && s[i] == '0') {
                break;
            }

            if((s[i] == '2' || s[i] == '7') && ff){
                break;
            }

            if(s[i] == '0')
                zz = true;
            if(s[i] == '5')
                ff = true;
        }

        cout << i << " " << endl;
        // cout << s.size() - i - 2 << endl;
        // cout << s.size() << "  " << left << "  " << i << endl;
        
    }

    return 0;
}
