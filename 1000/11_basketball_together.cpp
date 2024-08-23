#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--)
    // {
        long long n, d;
        cin >> n >> d;
        vector<long long> arr;
        long long x;
        for (long long i = 0; i < n;i++){
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.rbegin(), arr.rend());
        long long ans = 0;
        long long curr = 0;
        int i = 0;
        while(i<arr.size()){
            long long temp = ceil((double)d / arr[i]);
            if(temp*arr[i] == d)
                temp++;
            if(curr+temp > n){
                break;
            }
            i++;
            ans++;
            curr += temp;
        }
        cout << ans << endl;
    // }

    return 0;
}