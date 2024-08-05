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
        vector<int> arr;
        int x;
        for (int i = 0; i < n;i++){
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.rbegin(), arr.rend());
        if(arr[0] == arr.back()){
            cout << "NO";
        }else{
            swap(arr[1], arr.back());
            cout << "YES" << endl;
            for(auto& it : arr)
                cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}