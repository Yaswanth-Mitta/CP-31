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
    while (t--){
        int n;
        cin >> n;
        map<int, int> mpp;
        int x;
        for (int i = 0; i < n;i++){
            cin >> x;
            mpp[x]++;
        }
        if(mpp.size()==1){
            cout << "YES";
        }
        else if(mpp.size()>=3){
            cout << "NO";
        }else{
            vector<int> a;
            for(auto& it : mpp){
                a.push_back(it.second);
            }
            int x = a[0];
            int b = a[1];
            // cout << x << " " << b << " ";
            if(abs(x-b) <=1){
                cout << "YES";
            }else{
                cout << "NO";
            }
        }
        cout << endl;
    }
 


    return 0;
}