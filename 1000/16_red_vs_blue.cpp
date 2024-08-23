#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, r, b;
        cin >> n >> r >> b;
        string rr(r/(b+1), 'R');
        ll y = r % (b + 1);
        ll xt = b;
        // cout << y;
        while(xt){
            if(y>0)
                cout << "R";
            y--;
            cout << rr;
            cout << 'B';
            xt--;
        }
        cout << rr;
        cout << endl;
    }

    return 0;
}
