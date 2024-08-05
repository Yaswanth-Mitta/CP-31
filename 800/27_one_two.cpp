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
    vector<int> tw;
    while (t--)
    {
        int n;
        cin >> n;
        tw.clear();
        int x;
        for (int i = 0; i < n;i++){
            cin >> x;
            if(x == 2)
                tw.push_back(i+1);
        }
        if(tw.size() == 0) {
            cout << 1;
        }
        else if(tw.size()%2 == 1 ){
            cout << -1;
        }else{
            cout << tw[tw.size() / 2 - 1] ;
        }
        cout << endl;
    }

    return 0;
}