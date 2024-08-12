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
        int x;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if(x == 1)
                x++;
            arr.push_back(x);
        }

        for (int i = 1; i < n;i++){
            if(arr[i]%arr[i-1] == 0)
                arr[i]++;
        }

         for (auto &it : arr)
                cout << it << " ";

        cout << endl;
    }

    return 0;
}
