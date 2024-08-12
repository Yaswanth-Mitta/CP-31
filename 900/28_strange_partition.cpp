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
        int n, k;
        cin >> n >> k;
        long long sum = 0;
        long long sum2 = 0;
        long long x;
        for (int i = 0; i < n;i++){
            cin >> x;
            sum2 += ceil(double (x) / k);
            sum += x;
        }
        sum = ceil(double(sum) / k);
        cout << min(sum, sum2) << " " << max(sum, sum2) << endl;
    }

    return 0;
}