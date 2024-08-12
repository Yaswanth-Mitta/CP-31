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
        int mini = 1e9;
        int x;
        int diff;
        for (int i = 1; i <= n;i++){
            cin >> x;
            diff = abs(x - i);
            if(diff > 0){
                mini = min(mini, diff);
            }
            // cout << diff << " ";
        }
        if(mini == 1e9)
            mini = 0;
        cout << mini << endl;
    }

    return 0;
}