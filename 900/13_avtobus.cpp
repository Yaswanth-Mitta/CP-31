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
        long long n;
        cin >> n;
        cout << 0 % 2 << endl;
        if( n < 4){
            cout << -1 << endl;
        }
        else if(n % 2 == 0){

            n = n / 2;
            long long small = n / 2;
            long long large;
            if(n % 3 == 0){
                large = n / 3;
            }else {
                large = (n / 3) +1;
            }
            cout << large << " " << small;
        }else{
            cout << -1;
        }
        cout << endl;
    }

    return 0;
}
