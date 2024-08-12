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
        string a, b;
        cin >> a >> b;
        vector<queue<int>> lastidx(26); 
        vector<int> hashv(26, 0);        
        bool ans = true;

        for (int i = 0; i < b.size();i++){
            hashv[b[i] - 'A']++;
        }


        for (int i = 0; i < a.size();i++){
            lastidx[a[i] - 'A'].push(i);
            if(lastidx[a[i] - 'A'].size() > hashv[a[i] - 'A'])
                lastidx[a[i] - 'A'].pop();
        }

        int prev = -1;
        for (int i = 0; i < b.size(); i++)
        {
            auto& cu = lastidx[b[i] - 'A'];
            if(cu.empty() || cu.front() <= prev) {
                ans = false;
                break;
            }

            prev = cu.front();
            cu.pop();
        }

        if (ans)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}
