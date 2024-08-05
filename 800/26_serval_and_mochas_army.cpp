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
        int mini = 1e9;
        int x;
        vector<int> arr;
        for (int i = 0; i < n;i++){
            cin >> x;
            arr.push_back(x);
            mini = min(mini, x);
        }
        // cout << mini << " ";
        if(mini == 1){
            cout << "YES";
        }else{
            bool tikka = false;
            for (int i = 0; i < n;i++){
                for (int j = i+1 ; j < n;j++){
                    if(__gcd(arr[i] , arr[j]) <= 2){
                        tikka = true;
                        break;
                    }
                }
                if(tikka)
                    break;
            }
            if(tikka)
                cout << "YES";
            else
                cout << "NO";
        }
            cout << endl;
    }

    return 0;
}