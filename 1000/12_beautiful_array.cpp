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

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        if((s-b*k)%k == 0 ){
            vector<long long> arr(n, 0);
            long long temp = b / n;
            for (int i = 0; i < n;i++)
                arr[i] += temp;
            long long rem = b % n;
            for (int i = 0; rem && i < n;i++){
                rem--;
                arr[i]++;
            }

            rem = (s - b)/n;
            for (int i = 0; i < n;i++){
                arr[i] += rem;
                cout << arr[i] << " ";
            }
        }else{
            cout << -1;
        }
        cout << endl;
    }

    return 0;
}