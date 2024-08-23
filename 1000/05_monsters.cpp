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
        long long k, x;
        cin >> k;


        vector<vector<int>> mpp(k + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            x = x % k;
            if(x==0)
                x = k;
            mpp[x].push_back(i + 1);
        }



        for (int i = k; i > 0;i--){
            for(auto& it : mpp[i]){
                cout << it << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
