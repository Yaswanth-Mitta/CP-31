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
        int x;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(x);
        }
        int ans = 0;
        bool ok = true;
        for (int i = n - 1; i > 0; i--)
        {
            while (arr[i-1] >= arr[i])
            {
                ans++;
                arr[i-1] /= 2;


                if (arr[i-1] == 0 && i-1 > 0)
                {
                    ok = false;
                    break;
                }
            }
            if (!ok)
                break;
        }
        if (!ok)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
