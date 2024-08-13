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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }
        int i, j, k;
        bool ful = false;
        for ( j = 1; j <= n - 2;j++){
            bool iok = false;
            i = j - 1;
            while(i>=0){
                if(arr[i] < arr[j]){
                    iok = true;
                    break;
                }
                i--;
            }
            if(!iok)
                continue;
            k = j + 1;
            while(k<n){
                if(arr[k] < arr[j]){
                    ful = true;
                    break;
                }
                k++;
            }
            if(ful)
                break;
        }
        if(ful){
            cout << "YES" << endl;
            cout << i+1 << " " << j+1 << " " << k+1 << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}