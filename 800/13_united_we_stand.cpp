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
        vector<int> arr;
        for (int i = 0; i < n; i++){
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        if(arr[0] == arr.back()){
            cout << -1 ;
        }else{
            int i = 0;
            for (; i < n;i++){
                if(arr[i] != arr[0])
                    break;
            }
            cout << i << " " << n - i  << endl;

            for (int j = 0; j < i;j++)
                cout << arr[j] << " ";
            cout << endl;
            for (; i < n;i++){
                cout << arr[i] << " ";
            }
            // cout << endl;
        }
        cout << endl;
    }

    return 0;
}