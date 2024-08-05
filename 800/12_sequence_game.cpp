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
        int prev;
        cin >> prev;
        vector<int> arr;
        // cout << prev << " ";
        arr.push_back(prev);
        for (int i = 1; i < n;i++){
            cin >> x;
            if(x < prev){
                if(x-1 > 0)arr.push_back(x - 1);
                else arr.push_back(1);
            }
            arr.push_back(x);
            prev = x;
        }
        cout << arr.size() << endl;
        for(auto& it : arr)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}