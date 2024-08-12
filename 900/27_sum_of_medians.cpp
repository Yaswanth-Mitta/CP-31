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
        long long n, k;
        cin >> n >> k;
        int x;
        vector<int> arr;
        for (long long i = 0; i < n * k; i++){
            cin >> x;
            arr.push_back(x);
        }

        x = n / 2 + 1;
        // cout << x << " ";
        long long sum = 0;
        int i = n*k;
        while(k){
            k--;
            i -= x;
            // cout << arr[i] << "   ";
            sum += arr[i];

        }
        cout << sum << endl;
    }


    return 0;
}