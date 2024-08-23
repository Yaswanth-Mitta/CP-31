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
    vector<int> arr = {2, 2, 1, 0, 2, 0, 1, 2, 0, 1, 1, 4, 0, 4, 3};
    int kk = 0;
    while (t--)
    {
        int n , k;
        cin >> n >> k;
        int mini = k;
        int x;
        for (int i = 1; i <= n;i++){
            cin >> x;
            if(x % k == 0)
                mini = 0;
            mini = min(mini, k -  (x % k));
        }
        cout << arr[kk++] << " " << mini << endl;
    }
    return 0;
}