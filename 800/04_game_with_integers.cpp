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
        int x;
        int mini = 1e9;
        int first;
        for (int i = 0; i < n;i++){
            cin >> x;
            if(i == 0)
                first = x;
            mini = min(mini, x);
        }
        if(first == mini){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}