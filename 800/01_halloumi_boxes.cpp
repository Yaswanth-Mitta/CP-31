#include<bits/stdc++.h>
#include<iostream>
using namespace std;



int main()
{
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int x;
        vector<int> arr;
        for (int i = 0; i < n;i++){
            cin >> x;
            arr.push_back(x);
        }

        vector<int> temp(arr);
        sort(temp.begin(), temp.end());
        if(temp == arr || k>1){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}