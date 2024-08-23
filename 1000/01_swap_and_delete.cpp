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
        long long zeros = count(s.begin(), s.end(), '0');
        long long ones = s.size() - zeros;
        int i = 0;
        for (; i < s.size();i++){
            if(s[i] == '1')
                zeros--;
            else
                ones--;
            if(zeros == -1 || ones == -1){
                break;
            }
        }
        cout << s.size() - i << endl;
    }
    return 0;
}