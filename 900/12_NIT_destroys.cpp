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
        vector<int> arr;
        int zt = 0;
        int mo = 0;
        int x;
        int lsno = -1;
        int ftno = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(x);
            if(x != 0 && ftno == -1)
                ftno = i;
            if (x == 0)
                zt++;
            else
                lsno = i;
        }

        for (int i = 0; i < n ; i++)
        {
            if (arr[i] == 0 && ftno < i && lsno > i)
            {
                mo++;
                break;
            }
        }
        
        // cout << mo << " ";
        if (zt == n)
        {
            cout << 0;
        }
        else
        {
            if (mo == 1)
            {
                cout << 2;
            }
            else
            {
                cout << 1;
            }
        }
        cout << endl;
    }

    return 0;
}
