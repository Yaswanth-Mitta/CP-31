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
        int a, b, c;
        cin >> a >> b >> c;
        c = c % 2;
        if(c==1)
            a += 1;
        if(a > b){
            cout << "First";
        }else{
            cout << "Second";
        }
        cout << endl;
    }

    return 0;
}